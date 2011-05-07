#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "GameBoard.h"

class GameEngine {
public:
	void Run();
private:
	GameBoard board;
};

#endif