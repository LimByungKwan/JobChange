#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) /* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */ 
{
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�." << endl;
    HP = 80;
    MP = 20;
    power = 30;
    defence = 30;
    accuracy = 70;
    speed = 10;
    /* ��ĭ 4: ������ HP�� 80���� ���� */
    /* ������� MP�� 80, ������ ���ǵ带 80, �ü��� ��Ȯ���� 80���� ���� */
}
void Warrior::attack() {
    cout << "* ������� ������ �����Ѵ� (���ݷ�: " << power << ")" << endl;
    /* ��ĭ 5: ������ ���� ���� ��� ex) ���� �ֵθ��� */
}