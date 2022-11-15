#pragma once
#include "Creature.h"

enum MonsterType
{
	MT_Slime =1,
	MT_ORC = 2,
	MT_SKELETON =3
};
class Monster : public Creature
{
public:
	Monster(int monsterType) 
		:Creature(CT_MONSTER), _monsterType(monsterType)
	{

	}
	virtual ~Monster() {

	}
	virtual void PrintInfo();
protected:
	int _monsterType;
};

class Slime : public Monster
{
public:
	Slime() : Monster(MT_Slime)
	{
		_hp = 50;
		_attack = 5;
		_defence = 2;
	}
};
class ORC : public Monster
{
public:
	ORC() : Monster(MT_ORC)
	{
		_hp = 80;
		_attack = 8;
		_defence = 3;
	}
};
class Skeleton : public Monster
{
public:
	Skeleton() : Monster(MT_SKELETON)
	{
		_hp = 30;
		_attack = 6;
		_defence = 1;
	}
};
