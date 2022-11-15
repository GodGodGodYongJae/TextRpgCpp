#include "Player.h"
#include <iostream>

using namespace std;
void Player::PrintInfo()
{
	cout << " ------------------" << endl;
	cout << " [ Player Info] " << "HP : " << _hp << "Atk : " << _attack << "DEF : " << _defence
		<< endl;
}
