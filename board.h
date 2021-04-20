#pragma once
#ifndef DEBUG_1
#define DEBUG_1

#include <string>
#include <iostream>
#include <fstream>
#define area 9
using namespace std;
class SudokuBoard
{
private:
	string temp[3];
	string papan[9][9]; //array 2 dimensi
	string answer[9][9];

public:
	//Board(); //constructor
	void arena(); //fungsi import txt & memasukkan data ke papan
	void showboard(); //fungsi tampilkan papan
	string getanswer(int i, int j)
	{
		return answer[i][j];
	}
	string getpapan(int i, int j)
	{
		return papan[i][j];
	}
	void setpapan(int i, int j,int value)
	{
		papan[i][j] = to_string(value);
	}
};
#endif