#pragma once
#include <iostream>
#include <string>
using namespace std;

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 1024


struct IMAGE
{
	LPD3DXSPRITE sprite;
	LPDIRECT3DTEXTURE9 t;

	D3DXVECTOR3 p;
	D3DXVECTOR3 c;
	RECT r;

	D3DXIMAGE_INFO info{};

	bool visible = false;
};
struct STATUS
{
	DWORD HP;
	DWORD SP;

	DWORD speed;

	DWORD ATspeed;
	DWORD ATdamage;

	bool isDead = false;

};

enum DIR {
	STOP, UP, DOWN, LEFT, RIGHT
};

