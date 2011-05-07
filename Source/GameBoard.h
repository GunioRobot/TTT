#ifndef GAME_BOARD_H
#define GAME_BOARD_H

class GameBoard {
public:
	GameBoard();
	void SetPieceAt(int x, int y, char c);
	void Render();
private:
	char locations[9];
	static unsigned int BOARD_WIDTH;
	static unsigned int BOARD_HEIGHT;
};

#endif

