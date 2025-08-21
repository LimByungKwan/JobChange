#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string n)
    : nickname(n), level(1), HP (100), MP(50), power(10), defence(5), accuracy(80), speed(10), job_name("백수") { }

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

// getter
string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

// setter
void Player::setNickname(string n) { nickname = n; }
bool Player::setHP(int h) { if (h < 0) return false; HP = h; return true; }
bool Player::setMP(int m) { if (m < 0) return false; MP = m; return true; }
void Player::setPower(int p) { power = p; }
void Player::setDefence(int d) { defence = d; }
void Player::setAccuracy(int a) { accuracy = a; }
void Player::setSpeed(int s) { speed = s; }
