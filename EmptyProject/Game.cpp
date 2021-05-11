#include "DXUT.h"
#include "Game.h"
#include "GameData.h"
#include "Player.h"
#include "Enemy.h"
#include "BackGround.h"
#include "Missile.h"

FLOAT TimeIntervel = .0f;
DWORD dwOldTime = timeGetTime();
DWORD curT;

Player pA;

Enemy eA;

BackGround playBG;




void GameInit() {
	PlayerInit();
	EnemyInit();
	BGInit();

}

void GameUpdate() {
	BGUpdate();

	TimeIntervel = (timeGetTime() - dwOldTime) * .001f;
	dwOldTime = timeGetTime();

	curT = GetTickCount64();

	pA.KeyUpdate();

	//CollisionUpdate();
}

void GameRender() {
	playBG.SpriteDraw();

	eA.SpriteDraw();
	pA.SpriteDraw();
	
	for (int i = 0; i < 10; i++) {
		pA.missile[i].SpriteDraw();
		pA.missile[i].Update();
	}
	
	pA.UIDraw();
	
	

}

void GameRelease() {
	pA.SpriteRelease();
	pA.UIRelease();
	eA.SpriteRelease();

	playBG.SpriteRelease();

	for (int i = 0; i < 10; i++) {
		pA.missile[i].SpriteRelease();
	}
}

void PlayerInit()
{
	pA.Sprite::Init(L"resource//Player.png", { 100,600,0 });

	//나중에 다른데서 설정되게 바꿔야함
	pA.stat.HP = 200;
	pA.stat.speed = 500;
	pA.image.visible = true;

	pA.stat.ATspeed = 2;
	pA.stat.ATdamage = 0;

	pA.UIInit();

	pA.missileInit();
}

void EnemyInit()
{
	eA.Init(L"resource//Enemy1.png", { 200,100,0 }, 1, 1000);
	eA.image.visible = true;
}

void BGInit()
{
	playBG.Init(L"resource//GroundBG.png", { SCREEN_WIDTH * 0.5f, SCREEN_HEIGHT - (float)playBG.image.info.Height, 0 }, 1, 1000);
	playBG.image.visible = true;
}

void BGUpdate()
{
	playBG.Update();
}


