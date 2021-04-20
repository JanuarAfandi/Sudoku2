#pragma once
#include<iostream>
using namespace std;
class Player
{
private :
	int input;
	int i, j, value;
public :
	void playerinput();
	int geti()
	{
		return i;
	}
	int getj()
	{
		return j;
	}
	int getvalue()
	{
		return value;
	}
};