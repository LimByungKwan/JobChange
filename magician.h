#pragma once
#include "player.h"

class Magician : public Player /* ��ĭ 1: Player Ŭ������ ��� */
{
public:
    Magician(string nickname);
    void attack() override; /* ��ĭ 2: �θ� Ŭ������ �Լ��� ���������� ��� */;
};

