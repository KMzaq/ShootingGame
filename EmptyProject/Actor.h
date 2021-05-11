#pragma once
#include "SpriteAnim.h"
#include "Collision.h"
class Actor :
    public SpriteAnim //�浹���� �߰� //�̹������� �۰� �ϰų� �ؾ��ҵ�//�ƴϸ� �±׿� ���� �ٸ� ������� �ص� ������//�ƴ� ��ü���� ���� �ְų�
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

