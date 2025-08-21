#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) /* 빈칸 3: 부모 클래스의 생성자 호출 */
{
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    HP = 50;
    MP = 40;
    power = 20;
    defence = 20;
    accuracy = 80;
    speed = 80;
    /* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void Archer::attack() {
    cout << "* 활을 쏘아 빠르게 명중시킨다 (공격력: " << power << ")" << endl;
    /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
}