#pragma once
#include "Actor.h"
#include"GameData.h"
#include"Missile.h"

class Character :
    public Actor //������ �÷��̾�, �� �߰�
{
protected:
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();

public:
	STATUS stat;

    
};

