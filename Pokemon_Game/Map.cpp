#include <iostream>
#include <string>
#include <fstream>
#include "Map.h"
using namespace std; 
int split(string line, char delimiter, string arr[], int arrSize)
{
    string temp = "";
    int counter = 0;
    if (line == "" )
    {
        return 0;
    }
    else
    {
        line += delimiter; 
        for (int i = 0; i <line.length(); i++)
        { 
            if (line[i] != delimiter)
            {
                temp += line[i];
                
            }
            else
            {
                if (line [i +1 ] == delimiter)
                {
                    continue; 
                }
                if (temp != "")
                {
                arr[counter] = temp;
                counter++;
                temp = "";   
                }
            }
        }
    }
    return counter;
}
void Map :: Readmap()
{
        int counter = 0;
        string line; 
        ifstream myFile;
        myFile.open("mapPoke.txt");
        if(myFile.fail())
        {
            cout << "File can not be open" <<endl;
        }
        if (myFile.is_open())
        {
            while(getline(myFile,line) && counter < 25)
            {
                
               if(line == "")
               {
                   continue;
               }
               else 
               {
                       string temp [16];
                       split(line, ',', temp, 16);
                       for (int i = 0; i < 16; i++)
                       {
                            map[counter][i] = temp[i];
                       }
                       counter++;
               }
            }
        }
    }
string Map :: checktiles(int t1, int t2)
{
    return map[t1][t2];
    // if(map[t1][t2] == "~")
    // {
    //     cout << "water" <<endl; 
    // }
    // else if (map[t1][t2] == "G")
    // {
    //     cout << "Gym" <<endl;
    // }
    // else if (map[t1][t2] == "C")
    // {
    //     cout << "Poke Center" <<endl;
    // }
    // else if(map[t1][t2] == "X")
    // {
    //     cout << "Boundaries" <<endl;
    // }
}
void Map :: printMap(int T1, int T2)
{
    for(int i = T1-3 ; i < T1+3; i++)
    {
        for (int j = T2 -3 ; j < T2 +3; j++)
        {
            if( i == T1 && j ==T2)
            {
                cout  << "@ ";
                continue;
            }
            if( map[i][j] == "p" || map[i][j] == "P")
            {
                cout << "*"<< " ";
            }
            if(map[i][j] == "w" || map[i][j] == "W")
            {
                cout  << "~" << " "; 
            }
            if(i < 0 && i > 25 && j < 0 && j < 16)
            {
                cout << "X" << " ";
            }
            if (map[i][j] == "G" || map[i][j] == "g")
            {
                cout << "G" << " ";
            }
            if (map[i][j] == "C" || map[i][j] == "c")
            {
                cout << "C" << " ";
            }
        }
        cout <<endl;
    }
}