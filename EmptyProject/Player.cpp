#include "DXUT.h"
#include "Player.h"


void Player::KeyUpdate()
{
	if (GetAsyncKeyState(VK_UP)) {
		MoveUp();
	}
	if (GetAsyncKeyState(VK_DOWN)) {
		MoveDown();
	}
	if (GetAsyncKeyState(VK_LEFT)) {
		MoveLeft();
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		MoveRight();
	}

	if (GetAsyncKeyState(0x5a)) { //º¯°æ Áß
		
		missile[missileNum % 10].image.p = image.p;
		missile[missileNum % 10]._isShooting = true;
		missileNum++;
	}
}

void Player::UIInit()
{
	D3DXCreateLine(DXUTGetD3D9Device(), &g_Line_HPUI);
	g_Line_HPUI->SetWidth(10.0f);
}

FLOAT MaxHP = 200;
D3DXVECTOR2 a[2]{
	{50,50 },
{50 + MaxHP, 50},
};
void Player::UIDraw() 
{
	a[1].x = stat.HP;
	g_Line_HPUI->Begin();
	g_Line_HPUI->Draw(a , 2, 0xffff0000);
	g_Line_HPUI->End();
}

void Player::UIRelease()
{
	g_Line_HPUI->Release();
}

void Player::missileInit()
{
	/*for (Missile &ms : missile) {
		ms.Init(L"resource//missile.png", { 200,100,0 }, 1, 1000, stat.ATspeed, stat.ATdamage);
	}*/
	for (int i = 0; i < 10; i++) {
		missile[i].Init(L"resource//missile.png", { -10,900,0 }, 1, 1000, stat.ATspeed, stat.ATdamage);
		missile[i].image.visible = true;
	}
}
