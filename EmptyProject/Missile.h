#pragma once
#include "Actor.h"
class Missile :
    public Actor
{//
public:
    bool _isShooting = false;
    DWORD speed;
    DWORD damage;
    void Init(wstring filename, D3DXVECTOR3 pos, DWORD AnimIndex, DWORD AnimT, DWORD sp, DWORD dm);
    void Update();
};

