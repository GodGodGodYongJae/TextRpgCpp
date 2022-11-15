#include "Game.h"
#include <iostream>
#include "Player.h"
#include "Field.h"
using namespace std;

Game::Game() : _player(nullptr), _field(nullptr) {

}

Game::~Game() {
	if (_player != nullptr)
		delete _player;
	if (_field != nullptr)
		delete _field;
}

void Game::Init()
{
	_field = new Field();
}

void Game::Update()
{
	if (_player == nullptr)
		CreatePlayer();

	if (_player->IsDead())
	{
		delete _player;
		_player = nullptr;
		CreatePlayer();
	}

	_field->Update(_player);
}

void Game::CreatePlayer()
{
	while (_player == nullptr)
	{
		cout << " ----------------" << endl;
		cout << "Choice Your Character" << endl;
		cout << "1) Kngiht 2) Archer 3) Mage" << endl;
		cout << " --------------------- " << endl;
		cout << "> ";
		int input = 0;
		cin >> input;

		switch (input)
		{
		case PT_Knight:
			_player = new Knight();
			break;
		case PT_Archer:
			_player = new Archer();
			break;
		case PT_Mage:
			_player = new Mage();
			break;
		default:
			break;
		}
	}
}
