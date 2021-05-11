#include "DXUT.h"
#include "BackGround.h"

void BackGround::Init(wstring filename, D3DXVECTOR3 pos, DWORD AnimIndex, DWORD AnimT)
{
	SpriteAnim::Init(filename, pos, AnimIndex, AnimT);
	startPosition = pos.y;
}

void BackGround::Update()
{
	image.p.y += speed;
	if (image.p.y > startPosition + (image.info.Height * 0.5f))
		image.p.y = startPosition;
}
