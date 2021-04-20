#include<iostream>
#include "gamemanager.h"
using namespace std;
void Game::Play()
{
	int opsi;
	bool win = false;
	b.arena();
	while (!win) 
	{
		b.showboard();
		Instruction();
		cin >> opsi;
		if (opsi == 1)
		{
			p.playerinput();
			b.setpapan(p.geti(), p.getj(), p.getvalue());
		}
		win = checkwin();
	}
}

void Game::Instruction()
{
	cout << "\nPilih aksi :" << endl;
	cout << "1.Isi sudoku\n2.Undo\n3.Redo" << endl << endl;
}

bool Game::checkwin()
{
	int win = 0;
	for (int i = 0; i < area; i++)//baris
	{
		for (int j = 0; j < area; j++)//kolom
		{
			if (b.getpapan(i, j) == b.getanswer(i, j))
				win++;
		}
	}

	if (win == 81)
	{
		system("cls");
		cout << "You Win";
		return true;
	}
	else
		return false;
}
