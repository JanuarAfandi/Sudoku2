#include<iostream>
#include "player.h"

void Player::playerinput()
{
	cout << "Baris :" << endl;
	cin >> i;
	cout << "Kolom :" << endl;
	cin >> j;
	cout << "Isi : " << endl;
	cin >> value;
	i -= 1;
	j -= 1;
}