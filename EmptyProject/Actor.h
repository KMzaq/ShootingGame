#pragma once
#include "SpriteAnim.h"
#include "Collision.h"
class Actor :
    public SpriteAnim //충돌판정 추가 //이미지보다 작게 하거나 해야할듯//아니면 태그에 따라 다른 모양으로 해도 좋을듯//아님 객체마다 따로 넣거나
{
private:
	D3DXVECTOR3 center;

public:
	//C_Collision Collider;
	D3DXVECTOR3 pos;
	float ExtentX;
	float ExtentY;

	bool _GenerationHit = true;

	void ColliderInit(float sizeX, float sizeY, D3DXVECTOR3 p = { 0,0,0 });
	bool HitCheck(Actor This, Actor OtherActor);
};

