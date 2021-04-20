#pragma once
#ifndef DEBUG_2
#define DEBUG_2
#include "board.h"
#include "player.h"
//#include "player.cpp"

class Game
{
private:
	SudokuBoard b;
	Player p;
public:
	//Game();
	void Play();
	bool checkwin(); // untuk mencocokan dengan kunci jawaban
	void Instruction();

	
};
#endif