#pragma once
#include "Character.h"

class Player :
    public Character
{
private:
	LPD3DXLINE g_Line_HPUI;

public:
    void KeyUpdate();


	//UIŬ���� ���� �Űܾ���
	void UIInit();
	void UIDraw();
	void UIRelease();

	//�̻���
	Missile missile[10];
	void missileInit();
	int missileNum;
};

