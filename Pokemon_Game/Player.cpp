#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"
using namespace std; 
Player::Player()
{
    username = "";
    pokeball =0;
    position_x =0;
    position_y =0;
}
Player:: Player(string userName, int position_X, int postion_Y, int PokeBall)
{
    username = userName; 
    position_y = postion_Y;
    position_x = position_X;
    pokeball = PokeBall; 
}
string Player::getusername()
{
    return username;
}
void Player :: setusername(string userName)
{
    username = userName;
}
int Player :: getposition_x()
{
    return position_x;
}
void Player :: setposition_x(int position_X)
{
    position_x = position_X;
}
int Player :: getposition_y()
{
    return position_y;
}
void Player :: setposition_y(int position_Y)
{
    position_y = position_Y; 
}
int Player :: getpokeball()
{
    return pokeball;
}
void Player :: setpokeball(int PokeBall)
{
    pokeball = PokeBall;
}
