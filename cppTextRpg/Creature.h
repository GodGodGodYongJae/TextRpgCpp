#pragma once
enum CreatureType {
	CT_PLAYER = 0,
	CT_MONSTER = 1
};

class Creature
{
public : 
	Creature(int creaturetype) : _creatureType(creaturetype) 
	{
			
	}
	virtual ~Creature() {

	}

	virtual void PrintInfo() = 0;
	void OnAttacked(Creature* attacker);
	bool IsDead() { return _hp <= 0; }
public :
	int _creatureType;
protected:
	int _hp = 0;
	int _attack = 0;
	int _defence = 0;
};

