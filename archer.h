#pragma once
#include "player.h"

class Archer : public Player /* 빈칸 1: Player 클래스를 상속 */
{
public:
    Archer(string nickname);
    void attack() override; /* 빈칸 2: 부모 클래스의 함수를 재정의함을 명시 */;
};

