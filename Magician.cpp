#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) /* 빈칸 3: 부모 클래스의 생성자 호출 */
{
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    HP = 40;
    MP = 80;
    power = 25;
    defence = 30;
    accuracy = 75;
    speed = 50;
    /* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void Magician::attack() {
    cout << "* 주문을 외워 공격한다 (공격력: " << power << ")" << endl;
    /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
}