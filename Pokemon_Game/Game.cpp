#include <iostream>
#include <string>
#include <fstream>
#include "Game.h"
#include "Player.h"
#include "Map.h"
#include "Pokemon.h"
using namespace std; 

Game::Game()
{
    Pokemon pokemon[0];
    Map maps;
    Player players; 
}
void Game :: Welcome_screen()
{
    Player players;
    string name = "";
    cout << "Hi, I am Professor Oak what is your name?" <<endl;
    cout << "Please enter you name:" << endl;
    getline (cin, name);
    players.setusername(name); 
    cout << "The sun is shining " << players.getusername() <<  " It’s a beautiful day, you have 10 Pokéball left and your Pokémon are strong."<<endl;
}
void Game :: Start_Game()
{
    Map maps;
    int options = 0;
    cout << "Now chose your Pokemon that will assist you in your adventure." <<endl;
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n4. Pikachu"<<endl;
    cin >> options;
    if(options == 1)
    {
        players.setposition_x(13);
        players.setposition_y(7);
        players.getposition_x();
        players.getposition_y();
        cout << "Computer: Congrats, you chose Bulbasaur as your starter pokemon."<<endl;
        cout << "Professor Oak: You are ready to start your adventure!" <<endl;
        cout << "Professor Oak: Here is a map that you will need to keep track of where you are." <<endl;
        cout << "Computer: You have received a map from Professor Oak." <<endl;
        maps.Readmap();
        maps.printMap(players.getposition_x(),players.getposition_y());
    }
    else if(options == 2)
    {
        players.setposition_x(13);
        players.setposition_y(8);
        players.getposition_x();
        players.getposition_y();
        cout << "Computer: Congrats, you chose Charmander as your starter pokemon."<<endl;
        cout << "Professor Oak: You are ready to start your adventure!" <<endl;
        cout << "Professor Oak: Here is a map that you will need to keep track of where you are." <<endl;
        cout << "Computer: You have received a map from Professor Oak." <<endl;
        maps.Readmap();
         maps.printMap(players.getposition_x(),players.getposition_y());
    }
    else if (options == 3)
    {
        players.setposition_x(13);
        players.setposition_y(9);
        players.getposition_x();
        players.getposition_y();
        
        cout << "Computer: Congrats, you chose Squirtle as your starter pokemon." <<endl;
        cout << "Professor Oak: You are ready to start your adventure!" <<endl;
        cout << "Professor Oak: Here is a map that you will need to keep track of where you are." <<endl;
        cout << "Computer: You have received a map from Professor Oak." <<endl;
        maps.Readmap();
        maps.printMap(players.getposition_x(),players.getposition_y());
    }
    else if (options == 4)
    {
        players.setposition_x(13);
        players.setposition_y(10);
        players.getposition_x();
        players.getposition_y();
        cout << "Congrats, you chose Pikachu as your starter pokemon." <<endl;
        cout << "Professor Oak: You are ready to start your adventure!" <<endl;
        cout << "Professor Oak: Here is a map that you will need to keep track of where you are." <<endl;
        cout << "Computer: You have received a map from Professor Oak." <<endl;
        maps.Readmap();
        maps.printMap(players.getposition_x(),players.getposition_y());
    }
    cout << players.getposition_x() << " " << players.getposition_y()<<endl;
}
int Game :: menu()
{
    Map maps;
    int option =0;
    maps.Readmap();
    cout << "";
    cout << "What do you want to do next" <<endl;
    while (option != 4)
    {
        cout << "===Menu==="<<endl;
        cout << "1. Travel\n2. Rest\n3. Try Your Luck\n4. Quit The Game" <<endl;
        cin >> option; 
        if(option > 4 || option < 1)
        {
            cout  << "Invalid Input" <<endl;
        }
        else if (option == 1)
        {
            int user_choice = 0;
            while(user_choice != 6)
            {
                cout <<"===Menu===" <<endl;
                cout << "1. Up\n2. Right\n3. Down\n4. Left\n5. Stay\n6. Back To Menu"<<endl;
                cin >> user_choice;
                cout << maps.checktiles(players.getposition_x(), players.getposition_y()) <<endl;
                if(user_choice > 6 || user_choice < 1) 
                {
                    cout <<"Invaid Travel"<<endl;
                }
                else if(user_choice == 1)
                {
                    if(maps.checktiles(players.getposition_x(), players.getposition_y()-1) == "~")
                    {
                        cout << "Computer: You can not move there!" <<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else if (maps.checktiles(players.getposition_x(), players.getposition_y()) == "X")
                    {
                        cout << "Computer: You can not move there!"<<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else 
                    {
                        players.setposition_x(players.getposition_x()-1);
                        maps.printMap(players.getposition_x(),players.getposition_y());
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                }
                else if (user_choice == 2)
                {
                    if(maps.checktiles(players.getposition_x(), players.getposition_y()) == "~")
                    {
                        cout << "You can not move there!" <<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else if (maps.checktiles(players.getposition_x(), players.getposition_y()) == "X")
                    {
                        cout << "You can not move here"<<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else
                    {
                        players.setposition_y(players.getposition_y()+1);
                        maps.printMap(players.getposition_x(),players.getposition_y());
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                }
                else if (user_choice == 3)
                {
                    if(maps.checktiles(players.getposition_x(), players.getposition_y()) == "~")
                    {
                        cout << "You can not move there!" <<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else if (maps.checktiles(players.getposition_x(), players.getposition_y()) == "X")
                    {
                        cout << "You can not move here"<<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else 
                    {
                        players.setposition_x(players.getposition_x()+1);
                        maps.printMap(players.getposition_x(),players.getposition_y());
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                }
                else if (user_choice == 4)
                {
                    if(maps.checktiles(players.getposition_x(), players.getposition_y()) == "~")
                    {
                        cout << "You can not move there!" <<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else if (maps.checktiles(players.getposition_x(), players.getposition_y()) == "X")
                    {
                        cout << "You can not move here"<<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else 
                    {
                        players.setposition_y(players.getposition_y()-1);
                        maps.printMap(players.getposition_x(),players.getposition_y());
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                }
                else if (user_choice == 5)
                {
                    if(maps.checktiles(players.getposition_x(), players.getposition_y()) == "X")
                    {
                        cout << "You can not move there!" <<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else if (players.getposition_x ()< 0 || players.getposition_x() > 25 || players.getposition_y() < 0 || players.getposition_x() > 16)
                    {
                        cout << "You can not move here"<<endl;
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                    else
                    {
                        players.setposition_y(players.getposition_y()+0);
                        players.setposition_y(players.getposition_y()+0);
                        maps.printMap(players.getposition_x(),players.getposition_y());
                        cout << players.getposition_x() << " " << players.getposition_y()<<endl;
                    }
                }
                else if(user_choice == 6)
                {
                    cout << "Computer: going back to menu."<< endl;
                }
            }
        }
        else if (option == 2)
        {
            
        }
        else if (option == 3)
        {
            
        }
        else if (option == 4) 
        {
            cout << "Thanks For Playing " << players.getusername()<<endl; 
        }
    }
}
void Game :: encounter()
{
    
}
void Game :: gym()
{
    
}
void Game :: pokeCenter()
{
    
}
void Game :: Fight()
{
    
}