#include "DXUT.h"
#include "Actor.h"

float ThisActorUp;
float OtherActorUp;

float ThisActorDown;
float OtherActorDown;

float ThisActorLeft;
float OtherActorLeft;

float ThisActorRight;
float OtherActorRight;

void Actor::ColliderInit(float sizeX, float sizeY, D3DXVECTOR3 p)
{
	ExtentX = sizeX;
	ExtentY = sizeY;
	pos = p;
}

bool Actor::HitCheck(Actor This, Actor OtherActor)
{
	if (_GenerationHit) {
		center = { This.image.p.x + pos.x, This.image.p.y + pos.y, 0 };
		ThisActorUp = center.x - ExtentX;
		ThisActorDown = center.x + ExtentY;
		ThisActorLeft = center.y - ExtentX;
		ThisActorRight = center.y + ExtentX;

		D3DXVECTOR3 OtherCenter = { OtherActor.image.p.x + OtherActor.center.x, OtherActor.image.p.y + OtherActor.center.y, 0 };
		OtherActorUp = OtherActor.image.p.y - OtherActor.image.c.y;
		OtherActorDown = OtherActor.image.p.y + OtherActor.image.c.y;
		OtherActorLeft = OtherActor.image.p.x - OtherActor.image.c.x;
		OtherActorRight = OtherActor.image.p.x + OtherActor.image.c.x;

		bool _HitXaxis = ThisActorLeft <= OtherActorRight && ThisActorRight >= OtherActorLeft;
		bool _HitYaxis = ThisActorUp <= OtherActorDown && ThisActorDown >= OtherActorUp;
		if ((_HitXaxis && _HitYaxis)) {
			return true;
		}
	}
	return false;
}
