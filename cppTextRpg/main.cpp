#include<iostream>
//���漱�� �Ұ�. cpp �����̶�
#include "Game.h"

using namespace std;


//OOP ���� ���� ����. 
//��ü ������� ��� ���� �����ؾ� �Ѵ�.

int main() {
	
	srand((unsigned int)time(nullptr));
	//Game* game = new Game();
	Game game;
	game.Init(); 
	while (true)
	{
		game.Update();
	}

	return 0;
}