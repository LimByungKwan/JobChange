#pragma once
#include "player.h"

class Thief : public Player /* ��ĭ 1: Player Ŭ������ ��� */
{
public:
    Thief(string nickname);
    void attack() override; /* ��ĭ 2: �θ� Ŭ������ �Լ��� ���������� ��� */;
};
