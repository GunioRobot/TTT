#include "GameBoard.h"
#include <iostream>

using std::cout;
using std::endl;

unsigned int GameBoard::BOARD_WIDTH = 3;
unsigned int GameBoard::BOARD_HEIGHT = 3;

GameBoard::GameBoard()
{
	for(int x = 0; x < BOARD_WIDTH; ++x) {
		for(int y = 0; y < BOARD_HEIGHT; ++y) {
			SetPieceAt(x, y, '#');
		}
	}
}

void GameBoard::Render()
{
	for(int r = 0; r < BOARD_HEIGHT; ++r) {
		for(int c = 0; c < BOARD_WIDTH; ++c) {
			cout << " " << locations[c + r * BOARD_WIDTH] << " ";
			if(c != (BOARD_WIDTH-1)) cout << "|";
		}
		cout << endl;
		if(r != (BOARD_HEIGHT-1)) {
			for(int c = 0; c < BOARD_WIDTH; ++c) {
				cout << "---";
				if(c != (BOARD_WIDTH-1)) cout << "+";
			}
			cout << endl;
		}
	}
}

void GameBoard::SetPieceAt(int x, int y, char c)
{
	if(x < 0 || x >= BOARD_WIDTH) return;
	if(y < 0 || y >= BOARD_HEIGHT) return;

	locations[x + y * BOARD_WIDTH] = c;
}

