#include "board.h"
#include"gamemanager.h"
void SudokuBoard::arena()
{
	fstream arenas("board.txt"); //buka file txt
	if (arenas.is_open())
	{
		int i = 0;
		while (!arenas.eof())
		{
			getline(arenas, temp[i]);
			i++;//ambil data per baris txt ke temp
		}
		arenas.close(); //tutup file
	}
	else
		cout << "File Error"; //jika file tdk bisa dibuka

	int a = 0; //mulainya mengecek data yang ada di temp, a=0 data ke-1 dri temp 
	for (int i = 0; i < area; i++) //ij array 2 dimensi
	{
		for (int j = 0; j < area; j++)
		{
			papan[i][j] = temp[0].substr(a, 1); //substr(mengcopy data dari temp sebanyak 1 data dimulai dari a ke papan
			a++;
		}
	}
	for (int i = 0; i < area; i++) //ij array 2 dimensi
	{
		for (int j = 0; j < area; j++)
		{
			if (papan[i][j] == "0")
				papan[i][j] = " ";
		}
	}

	//buat kunci jawaban
	fstream ans("answer.txt"); //buka file txt
	if (ans.is_open())
	{
		int i = 0;
		while (!ans.eof())
		{
			getline(ans, temp[i]);
			i++;//ambil data per baris txt ke temp
		}
		ans.close(); //tutup file
	}
	else
		cout << "File Error"; //jika file tdk bisa dibuka
	int b = 0; //mulainya mengecek data yang ada di temp, a=0 data ke-1 dri temp 
	for (int i = 0; i < area; i++) //ij array 2 dimensi
	{
		for (int j = 0; j < area; j++)
		{
			answer[i][j] = temp[0].substr(b, 1); //substr(mengcopy data dari temp sebanyak 1 data dimulai dari a ke papan
			b++;
		}
	}

}

void SudokuBoard::showboard() //nampilkan data di papan
{
	system("cls");
	int y = 0,x=1;
	for (int i = 0; i < area+1; i++)//baris
	{
		cout << y << "|";
		for (int j = 0; j < area; j++)//kolom
		{
			if (i == 0)
			{
				cout << "_" << x << "_";
				if (j == 2 || j == 5 || j == 9)
					cout << "_";//pembatas
				if (j == 8)
					cout << endl;
			}

			else {
				cout << " " << papan[i-1][j] << " ";
				if (j == 2 || j == 5 || j == 8)
					cout << "|";//pembatas
				if (i == 3 && j == 8 || i == 6 && j == 8)
					cout << "\n  ___ ___ ___ ___ ___ ___ ___ __";
				if (j == 8)
					cout << endl;
			}
			x++;
		}
		y++;
	}
}





    