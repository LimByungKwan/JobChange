#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) /* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */
{
    job_name = "����";
    cout << "* �������� �����Ͽ����ϴ�." << endl;
    HP = 60;
    MP = 30;
    power = 20;
    defence = 20;
    accuracy = 75;
    speed = 80;
    /* ��ĭ 4: ������ HP�� 80���� ���� */
    /* ������� MP�� 80, ������ ���ǵ带 80, �ü��� ��Ȯ���� 80���� ���� */
}
void Thief::attack() {
    cout << "* �ܰ����� ������ �����Ѵ� (���ݷ�: " << power << ")" << endl;
    /* ��ĭ 5: ������ ���� ���� ��� ex) ���� �ֵθ��� */
}