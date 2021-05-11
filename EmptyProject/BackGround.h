#pragma once
#include "Actor.h"
class BackGround :
    public Actor
{
protected:
    float startPosition;
    float speed = 5;

public:
    void Init(wstring filename, D3DXVECTOR3 pos, DWORD AnimIndex, DWORD AnimT);
    void Update(); 
};

