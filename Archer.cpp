#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) /* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */
{
    job_name = "�ü�";
    cout << "* �ü��� �����Ͽ����ϴ�." << endl;
    HP = 50;
    MP = 40;
    power = 20;
    defence = 20;
    accuracy = 80;
    speed = 80;
    /* ��ĭ 4: ������ HP�� 80���� ���� */
    /* ������� MP�� 80, ������ ���ǵ带 80, �ü��� ��Ȯ���� 80���� ���� */
}
void Archer::attack() {
    cout << "* Ȱ�� ��� ������ ���߽�Ų�� (���ݷ�: " << power << ")" << endl;
    /* ��ĭ 5: ������ ���� ���� ��� ex) ���� �ֵθ��� */
}