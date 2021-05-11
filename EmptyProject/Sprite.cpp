#include "DXUT.h"
#include "Sprite.h"

void Sprite::Init(wstring filename, D3DXVECTOR3 pos)
{
	D3DXCreateSprite(DXUTGetD3D9Device(), &image.sprite);
	D3DXCreateTextureFromFileEx(DXUTGetD3D9Device(), filename.c_str(), -2, -2, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_MANAGED, D3DX_FILTER_NONE, 0, 0, 0, 0, &image.t);
	D3DXGetImageInfoFromFile(filename.c_str(), &image.info);

	image.c = { image.info.Width * 0.5f, image.info.Height * 0.5f, 0 };

	image.p = pos;

	image.r = { 0,0,(LONG)image.info.Width, (LONG)image.info.Height };
	
}

void Sprite::SpriteDraw()
{
	if (image.visible) {
		image.sprite->Begin(D3DXSPRITE_ALPHABLEND);
		image.sprite->Draw(image.t, &image.r, &image.c, &image.p, 0xffffffff);
		image.sprite->End();
	}
	
}

void Sprite::SpriteRelease()
{
	if (image.sprite != NULL)
		image.sprite->Release();
	if (image.t != NULL)
		image.t->Release();
}
