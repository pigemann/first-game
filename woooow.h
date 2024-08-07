#pragma once
#include <ctime>
#include <iostream>
#include <cstdlib> 
using namespace std;
string story();
string adventure(string);
class entity
{
public:
	int hp, xp, damage, lvl;
};
class player : public entity {
public:
	int xp_needed;
	string name;
};


