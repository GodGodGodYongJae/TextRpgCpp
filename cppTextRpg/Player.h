#pragma once
#include "Creature.h"
#include <iostream>
using namespace std; 
//Kinght Archer Magiction
enum PlayerType
{
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3
};
class Player : public Creature
{
public:
	Player(int PlayerType) : Creature(CT_PLAYER),
		_playerType(PlayerType)
	{
		cout << "�÷��̾� ����" << endl;
	}
	virtual ~Player() {
		cout << "�÷��̾� ����" << endl;
	}

	virtual void PrintInfo();
protected:
	int _playerType;
};

class Knight : public Player
{
public :
	Knight() : Player(PT_Knight) {
		_hp = 150;
		_attack = 10;
		_defence = 5;
		cout << " ��� ���� " << endl;
	}
	~Knight() {
		cout << "��� ����" << endl;
	}
};

class Archer : public Player
{
public:
	Archer() : Player(PT_Archer)
	{
		_hp = 80;
		_attack = 15;
		_defence = 2;
		cout << " ���� ���� " << endl;
	}
};
class Mage : public Player
{
public:
	Mage() : Player(PT_Mage) {
		_hp = 50;
		_attack = 25;
		_defence = 2;
		cout << " ������ ���� " << endl;
	}
};
