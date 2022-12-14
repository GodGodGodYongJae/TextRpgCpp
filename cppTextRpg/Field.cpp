#include "Field.h"
#include "Player.h"
#include "Monster.h"
#include <stdlib.h>

Field::Field()
{
}

Field::~Field()
{
	if (_monster != nullptr)
		delete _monster;
}

void Field::Update(Player* player)
{
	if (_monster == nullptr)
		CreateMonster();

	StartBattle(player);
}

void Field::CreateMonster()
{
	int randValue = 1 + rand() % 3;
	switch (randValue)
	{
	case MT_Slime:
		_monster = new Slime();
		break;
	case MT_ORC:
		_monster = new ORC();
		break; 
	case MT_SKELETON:
		_monster = new Skeleton();
		break;
	}
}

void Field::StartBattle(Player* player)
{
	while (true)
	{
		player->PrintInfo();
		_monster->PrintInfo();

		
		_monster->OnAttacked(player);
		
		if (_monster->IsDead())
		{
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}

		player->OnAttacked(_monster);
		if (player->IsDead())
		{
			player->PrintInfo();
			break;
		}
	}
}
