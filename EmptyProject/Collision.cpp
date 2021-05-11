#include "DXUT.h"
#include "Collision.h"

//float ThisActorUp;
//float OtherActorUp;
//
//float ThisActorDown;
//float OtherActorDown;
//
//float ThisActorLeft;
//float OtherActorLeft;
//
//float ThisActorRight;
//float OtherActorRight;
//
//void C_Collision::CollInit(Sprite ThisActor, float sizeX, float sizeY, D3DXVECTOR3 position)
//{
//	This = ThisActor;
//	ExtentX = sizeX;
//	ExtentY = sizeY;
//	pos = position;
//}
//
//bool C_Collision::HitCheck(const Actor OtherActor)
//{
//	center = { This.image.p.x + pos.x, This.image.p.y + pos.y, 0 };
//	ThisActorUp = center.x - ExtentX;
//	ThisActorDown = center.x + ExtentY;
//	ThisActorLeft = center.y - ExtentX;
//	ThisActorRight = center.y + ExtentX;
//	
//	D3DXVECTOR3 OtherCenter = {OtherActor.image.p.x + OtherActor.Collider.center.x, OtherActor.image.p.y + OtherActor.Collider.center.y, 0};
//	OtherActorUp = OtherActor.image.p.y - OtherActor.image.c.y;
//	OtherActorDown = OtherActor.image.p.y + OtherActor.image.c.y;
//	OtherActorLeft = OtherActor.image.p.x - OtherActor.image.c.x;
//	OtherActorRight = OtherActor.image.p.x + OtherActor.image.c.x;
//	
//	bool _HitXaxis = ThisActorLeft <= OtherActorRight && ThisActorRight >= OtherActorLeft;
//	bool _HitYaxis = ThisActorUp <= OtherActorDown && ThisActorDown >= OtherActorUp;
//	if ( _GenerationHit && (_HitXaxis && _HitYaxis)) {
//		return true;
//	}
//	return false;
//}
