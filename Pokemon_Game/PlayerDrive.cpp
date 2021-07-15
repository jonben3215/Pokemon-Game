#include <iostream>
#include "Player.cpp"
using namespace std; 
int main()
{
    Player players;
    string name = "";
    cout << "What is your name?" <<endl;
    cout << "Please enter you name:" << endl;
    getline (cin, name);
    players.setusername(name); 
    cout << "The sun is shining " << players.getusername() <<  " It’s a beautiful day, you have 10 Pokéball left and your Pokémon are strong."<<endl;
}