#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) /* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */
{
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    HP = 40;
    MP = 80;
    power = 25;
    defence = 30;
    accuracy = 75;
    speed = 50;
    /* ��ĭ 4: ������ HP�� 80���� ���� */
    /* ������� MP�� 80, ������ ���ǵ带 80, �ü��� ��Ȯ���� 80���� ���� */
}
void Magician::attack() {
    cout << "* �ֹ��� �ܿ� �����Ѵ� (���ݷ�: " << power << ")" << endl;
    /* ��ĭ 5: ������ ���� ���� ��� ex) ���� �ֵθ��� */
}