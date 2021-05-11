#pragma once
#include "GameData.h"
class Sprite
{

public:
	IMAGE image;

	void Init(wstring filename, D3DXVECTOR3 pos);
	void SpriteDraw();
	void SpriteRelease();


};

