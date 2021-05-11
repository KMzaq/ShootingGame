#pragma once
#include "Character.h"

class Player :
    public Character
{
private:
	LPD3DXLINE g_Line_HPUI;

public:
    void KeyUpdate();


	//UI클래스 만들어서 옮겨야함
	void UIInit();
	void UIDraw();
	void UIRelease();

	//미사일
	Missile missile[10];
	void missileInit();
	int missileNum;
};

