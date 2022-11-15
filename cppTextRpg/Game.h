#pragma once

class Player; // 전방선언
class Field;

// Game is - a Player X 
// Game has - a  Player O 
class Game
{
public:
	Game();
	~Game();
	void Init();
	void Update();
	void CreatePlayer();
private:
	Player* _player;
	Field* _field;
};

