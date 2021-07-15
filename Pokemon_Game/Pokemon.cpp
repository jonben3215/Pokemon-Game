#include <iostream>
#include <string>
#include <fstream>
#include "Pokemon.h"
using namespace std; 

Pokemon::Pokemon()
{
     Attack = 0;
	 Speed=0;
     Defense=0;
	 Max_Attack=0;
	 Max_defense=0; 
	 Lv =1;
	 EXP=0; 
	 pokemonName = "";
}
Pokemon::Pokemon(int attack, int speed, int defense, int Max_attack, int Max_Defense, int lv, int eXP, string PokemonName)
{
    Attack = attack;
    Speed = speed;
    Defense = defense;
    Max_Attack = Max_attack;
    Max_Defense = Max_Defense;
    Lv = lv;
    EXP = eXP;
    pokemonName = PokemonName;
}
int Pokemon :: getAttack()
{
    return Attack;
}
void Pokemon::setAttack(int attack)
{
     Attack = attack;
}
int Pokemon :: getSpeed()
{
    return Speed;
}
void Pokemon:: setSpeed(int speed)
{
    Speed = speed;
}
int Pokemon :: getDefense()
{
    return Defense;
}
void Pokemon :: setDefense(int defense)
{
    Defense = defense;
}
int Pokemon :: getMax_Attack()
{
    return Max_Attack; 
}
void Pokemon :: setMax_Attack(int Max_attack)
{
    Max_Attack = Max_attack;
}
int Pokemon :: getMax_defense()
{
    return Max_defense;
}
void Pokemon :: setMax_defense(int Max_Defense)
{
    Max_defense = Max_Defense;
}
int Pokemon :: getLV()
{
    return Lv;
}
void Pokemon :: setLv(int lv)
{
    Lv = lv;
}
int Pokemon :: getEXP()
{
    return EXP;
}
void Pokemon :: setEXP(int eXP)
{
    EXP = eXP; 
}
string Pokemon :: getpokemonName()
{
    return pokemonName;
}
void Pokemon :: setpokemonName(string PokemonName)
{
    pokemonName = PokemonName; 
}