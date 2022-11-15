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
		cout << "플레이어 생성" << endl;
	}
	virtual ~Player() {
		cout << "플레이어 삭제" << endl;
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
		cout << " 기사 생성 " << endl;
	}
	~Knight() {
		cout << "기사 삭제" << endl;
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
		cout << " 아쳐 생성 " << endl;
	}
};
class Mage : public Player
{
public:
	Mage() : Player(PT_Mage) {
		_hp = 50;
		_attack = 25;
		_defence = 2;
		cout << " 메지션 생성 " << endl;
	}
};
