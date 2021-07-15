#include <iostream>
#include <string>
using namespace std;
#include "Pokemon.cpp"
int main()
{
	Pokemon myPokemon; 
	//cout << "test" << endl;
	myPokemon.setpokemonName("mew");
	//cout << "test 2" << endl;
	//myPokemon.setAttack(100);
	cout << myPokemon.getpokemonName() <<endl;
	 //cout << "test 3" <<endl; 
	//cout << myPokemon.getAttack() <<endl; 
}