#pragma once
#include "player.h"

class Archer : public Player /* ��ĭ 1: Player Ŭ������ ��� */
{
public:
    Archer(string nickname);
    void attack() override; /* ��ĭ 2: �θ� Ŭ������ �Լ��� ���������� ��� */;
};

