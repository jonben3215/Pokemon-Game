#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H
class Player
{
	public:
		Player();
		Player(string username, int position_x, int position_y, int pokeball);
		string getusername();
		void setusername(string);
		int getposition_x();
		void setposition_x(int);
		int getposition_y();
		void setposition_y(int);
		int getpokeball();
		void setpokeball(int);
		
	private:
		string username; 
		int position_x;
		int position_y;
		int pokeball;
		int Move_player;
		int number_pokemon = 6;
		
};
#endif