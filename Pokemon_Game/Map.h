#include <iostream>
#include <string>
using namespace std;
#ifndef MAP_H
#define MAP_H 
class Map
{
public:
	void Readmap();
	string checktiles(int t1, int t2);
	void printMap(int, int);
		
private:
	string map[25][16];
	
		
};
#endif