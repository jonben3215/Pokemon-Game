#include <iostream>
#include <string>
using namespace std;
#include "Pokemon.cpp"
#include "Player.cpp"
#include "Map.cpp"
#ifndef GAME_H
#define GAME_H
class Game
{
	private:
		
		Pokemon pokemon[151];
		Map maps;
		Player players;
		
		
	public:
			Game();
			void Welcome_screen();
			void Start_Game();
			void Trainers();
			void encounter();
			void gym();
			void pokeCenter();
			void Fight();
			int menu(); 
			
};
#endif