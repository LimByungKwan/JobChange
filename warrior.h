#pragma once
#include "player.h"

class Warrior : public Player /* ��ĭ 1: Player Ŭ������ ��� */
{
public:
    Warrior(string nickname);
    void attack() override; /* ��ĭ 2: �θ� Ŭ������ �Լ��� ���������� ��� */;
}; 
