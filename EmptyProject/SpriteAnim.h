#pragma once
#include "Sprite.h"
class SpriteAnim :
    public Sprite
{
    DWORD oldtime;
    DWORD frameNum;
    DWORD frameCount;
    DWORD frametime;

public:
    void Init(wstring filename, D3DXVECTOR3 pos, DWORD AnimIndex, DWORD AnimT);
    void AnimUpdate(DWORD t);
};

