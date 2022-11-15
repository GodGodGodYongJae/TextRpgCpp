#include "Monster.h"
#include <iostream>

using namespace std;
void Monster::PrintInfo()
{
	cout << " ------------------" << endl;
	cout << " [ Monster Info] " << "HP : " << _hp << "Atk : " << _attack << "DEF : " << _defence
		<< endl;
}
