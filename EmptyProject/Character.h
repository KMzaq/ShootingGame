#pragma once
#include "Actor.h"
#include"GameData.h"
#include"Missile.h"

class Character :
    public Actor //하위로 플레이어, 적 추가
{
protected:
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();

public:
	STATUS stat;

    
};

