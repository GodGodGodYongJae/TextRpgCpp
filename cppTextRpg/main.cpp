#include<iostream>
//전방선언 불가. cpp 파일이라
#include "Game.h"

using namespace std;


//OOP 파일 분할 연습. 
//객체 기반으로 모든 것을 생각해야 한다.

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