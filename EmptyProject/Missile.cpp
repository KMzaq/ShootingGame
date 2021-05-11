#include "DXUT.h"
#include "Missile.h"

void Missile::Init(wstring filename, D3DXVECTOR3 pos, DWORD AnimIndex, DWORD AnimT, DWORD sp, DWORD dm)
{
	SpriteAnim::Init(filename, pos, AnimIndex, AnimT);
	speed = sp;
	damage = dm;
}

void Missile::Update()
{
	if (_isShooting) {
		image.p.y -= speed;
		if (image.p.y < -10) {
			_isShooting = false;
		}
	}
}