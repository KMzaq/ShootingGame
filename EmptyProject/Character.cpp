#include "DXUT.h"
#include "Character.h"

extern FLOAT TimeIntervel;

void Character::MoveUp()
{
	image.p.y -= stat.speed * TimeIntervel;
}

void Character::MoveDown()
{
	image.p.y += stat.speed * TimeIntervel;
}

void Character::MoveLeft()
{
	image.p.x -= stat.speed * TimeIntervel;
}

void Character::MoveRight()
{
	image.p.x += stat.speed * TimeIntervel;
}
