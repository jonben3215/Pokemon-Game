#include <iostream>
#include <string>
using namespace std;
#ifndef POKEMON_H
#define POKEMON_H

class Pokemon
{
public:
	Pokemon();
	Pokemon(int Attack, int Speed, int Defense, int Max_Attack, int Max_defense, int Lv, int EXP, string pokemonName);
	int getAttack(); 
	void setAttack(int);
	int getSpeed();
	void setSpeed (int);
	int getDefense();
	void setDefense(int);
	int getMax_Attack();
	void setMax_Attack(int);
	int getMax_defense();
	void setMax_defense(int);
	int getLV(); 
	void setLv(int);
	int getEXP();
	void setEXP(int);
	string getpokemonName();
	void setpokemonName(string);
		
private:
	int Attack;
	int Speed;
	int Defense;
	int Max_Attack;
	int Max_defense; 
	int Lv;
	int EXP;
	string pokemonName;
		
};
#endif