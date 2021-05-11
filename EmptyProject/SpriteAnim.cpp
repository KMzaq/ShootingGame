#include "DXUT.h"
#include "SpriteAnim.h"

void SpriteAnim::Init(wstring filename, D3DXVECTOR3 pos, DWORD AnimIndex, DWORD AnimT)
{
	Sprite::Init(filename, pos);

	frameNum = AnimIndex;
	frametime = AnimT;

	image.c = { ((LONG)image.info.Width / frameNum) * 0.5f, (LONG)image.info.Height * 0.5f, 0 };
	image.r = { 0,0, (LONG)(image.info.Width / frameNum), (LONG)image.info.Height };
}

void SpriteAnim::AnimUpdate(DWORD t)
{
	if (t - oldtime > frametime) {
		frameCount++;
		image.r = { (LONG)((frameCount % frameNum) * (image.info.Width / frameNum)), 0,
					(LONG)((frameCount % frameNum) * (image.info.Width / frameNum) + (image.info.Width / frameNum)), (LONG)image.info.Height };
		oldtime = t;
	}
}
