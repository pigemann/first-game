#include <iostream>
#include <cstdlib> 
#include <ctime>
/*to do list :
get rid of cin.get <-- done 
global player 
*/
using namespace std;
class entity
{
public:
	int hp, xp, damage, lvl;
	string name;
	entity(string _name , int _hp, int _xp , int _damage ) {
		name = _name;
		hp = _hp; 
		xp = _xp;
		damage = _damage;
}
};
class player : public entity {
public:
	int xp_needed;
	player(string _name, int _hp, int _xp, int _damage):entity( _name,  _hp, _xp, _damage) {
	}
};
void waitforenter();
void monsterfight (string , int& , int , int& , int , int , entity ,int );
void clearScreen();
void lvl_up ( int& , int& , int& , int& , int& );
int fight(string name, int& hp, int& damage, int& xp, int& lvl, int& xp_, int& m, entity dragon ) {
	string msg;
	entity goblin( "goblin",20 , 25 , 5 );
	entity zombie("zombie", 70, 150, 20);
	entity squeleten( "squeleten",100, 300 , 50 );
	entity troll( "troll", 300, 500, 100);
	entity g_troll( "g_troll", 500, 1500, 150);
	int a = (rand() % 100) + 1;
	switch (lvl)
	{
	case 1:
		if (a >= 30) {


			monsterfight(name, hp, damage, xp, lvl, xp_, goblin, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (30 > a && a >= 10) {

			monsterfight(name, hp, damage, xp, lvl, xp_, zombie, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (10 > a && a >= 5) {

			monsterfight(name, hp, damage, xp, lvl, xp_, squeleten, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (5 > a && a >= 3) {

			monsterfight(name, hp, damage, xp, lvl, xp_, troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {

			monsterfight(name, hp, damage, xp, lvl, xp_, g_troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 2:
		if (a >= 50) {


			monsterfight(name, hp, damage, xp, lvl, xp_, goblin, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (50 > a && a >= 20) {

			monsterfight(name, hp, damage, xp, lvl, xp_, zombie, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (20 > a && a >= 10) {

			monsterfight(name, hp, damage, xp, lvl, xp_, squeleten, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (10 > a && a >= 7) {

			monsterfight(name, hp, damage, xp, lvl, xp_, troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {

			monsterfight(name, hp, damage, xp, lvl, xp_, g_troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 3:
		if (a >= 70) {


			monsterfight(name, hp, damage, xp, lvl, xp_, goblin, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (70 > a && a >= 40) {

			monsterfight(name, hp, damage, xp, lvl, xp_, zombie, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (40 > a && a >= 20) {

			monsterfight(name, hp, damage, xp, lvl, xp_, squeleten, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (20 > a && a >= 12) {

			monsterfight(name, hp, damage, xp, lvl, xp_, troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {

			monsterfight(name, hp, damage, xp, lvl, xp_, g_troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 4:
		if (a >= 80) {


			monsterfight(name, hp, damage, xp, lvl, xp_, goblin, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (80 > a && a >= 65) {

			monsterfight(name, hp, damage, xp, lvl, xp_, zombie, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (65 > a && a >= 45) {

			monsterfight(name, hp, damage, xp, lvl, xp_, squeleten, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (45 > a && a >= 15) {

			monsterfight(name, hp, damage, xp, lvl, xp_, troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {

			monsterfight(name, hp, damage, xp, lvl, xp_, g_troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 5:
		if (a >= 95) {


			monsterfight(name, hp, damage, xp, lvl, xp_, goblin, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (95 > a && a >= 80) {

			monsterfight(name, hp, damage, xp, lvl, xp_, zombie, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (80 > a && a >= 60) {

			monsterfight(name, hp, damage, xp, lvl, xp_, squeleten, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (60 > a && a >= 35) {

			monsterfight(name, hp, damage, xp, lvl, xp_, troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {

			monsterfight(name, hp, damage, xp, lvl, xp_, g_troll, m);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 6:
		cout << name << " : i am here to take your soul fucking dragon ";
		monsterfight(name, hp, damage, xp, lvl, xp_, dragon, m);
		lvl_up(xp, xp_, lvl, damage, m);
		break;
		a = 0;
	}
	if (lvl== 7)  return 0 ;
	return 1;
};
string story() {
	string name;
	cout << "what is you name "<< endl;
	cin >> name;
	clearScreen();
	cout << "Hello, " << name << "." << endl << "Our beloved Queen Pigeman is in grave danger, held captive by a dragon." << endl << "Your mission is to journey to her rescue." << endl << "Along the way, you will face challenges that will help you grow stronger and more skilled." << endl << "This journey is not just about reaching the dragon but also about becoming the hero you are destined to be." << endl  ;
	waitforenter();
	return (name);
};

string adventure(string name_) {
	int b = 1;
	entity dragon("dragon", 1000, 50000, 250);
	player player_( name_ , 100, 7810, 10);
	player_.xp_needed = 10;
	player_.lvl = 1;
	int choice, a = 0 ;
	int m = player_.hp;
	do {
		cout << "1.advance" << endl << "2.rest" << endl;
		cin >> choice;
		clearScreen();
		switch (choice)
		{
		case 1:
			
			a = (rand() % 3) + 1;
			switch (a)
			{
			default:
				cout << "you encoutred a monster" << endl ;
				waitforenter();
				clearScreen();
				b = fight (player_.name, player_.hp, player_.damage, player_.xp, player_.lvl, player_.xp_needed, m , dragon );
				a = 0;
				break;
			case 1:
				cout << "looks like its safe for now" << endl ;
				waitforenter();
				clearScreen();
				a = 0;
				break;
			}

			break;
		case 2:
			a++;
			switch (a)
			{
			case (1):
				if (player_.hp > m - ((double)m * 0.2))
				{
					player_.hp = m;
				}
				else {
					player_.hp += (double) m * 0.2 ;
				}
				cout << "main main " << endl;
				break;
			case (2):
				if (player_.hp > m - ((double)m * 0.2))
				{
					player_.hp = m;
				}
				else {
					player_.hp += (double)m * 0.2;
				}
				cout << "main main " << endl;
				break;
			case (3):
				if (player_.hp > m - ((double)m * 0.2))
				{
					player_.hp = m;
				}
				else {
					player_.hp += (double)m * 0.2;
				}
				cout << "main main " << endl;
				break;
			case 6:
				cout << name_ << ":ahhh i feel tired i should probably take a nap. " << endl << "zzzzzzzzzzzzzzzzzzzzzzz";
				player_.hp = 0;
				break;
			default:
				cout << "you are getting tired ." << endl << "be carefull if you fall asleep you will die" << endl;
				break;
			}
		break;
		default:
			cout << "invalid choice " << endl;
			break;
		}
		cout <<"b is " << b << endl;
		waitforenter();
		clearScreen();
	} while (player_.hp > 0 && b == 1 );
	if (player_.hp <= 0) {
		return "you lost";
	}
	else {
		return "you won and saved the queen pigeman";
	}
};

void clearScreen() {
	system("cls");
};


void monsterfight(string name, int& hp, int damage, int& xp, int lvl, int xp_, entity monster ,int  maxhealth) {
	int random_num ;
	cout << name << ":back  off dirty "<< monster.name <<endl ;
	do {
		cout << "name:" << name << "         lvl:" << lvl << endl;
		cout << "health:" << maxhealth <<"/"<< hp << "    |    monster hp:" << monster.hp << endl;
		cout << "damage:" << damage << "    |    monster damage:" << monster.damage << endl;
		cout << "xp:" << xp << endl;
		cout << "xp for next lvl:" << xp_ << endl;
		cout << "1.attaque" << endl << "2.runn" << endl;
		cin >> random_num;
		switch (random_num)
		{
		default:
			clearScreen();
			cout << "invalid choice " << endl;
			waitforenter();
			break;
		case 1:
			monster.hp -= damage;
			hp -= monster.damage;
			break;
		case 2:
			clearScreen();
			cout << "hell nah bro i am not fighting that thing" << endl ;
			waitforenter();
			break;
		}
		clearScreen();

	} while (hp > 0 && monster.hp > 0 && random_num != 2);
	if (hp <= 0) {
		cout << "you died" << endl ;
	}
	else if (monster.hp <= 0) {
		xp += monster.xp;
		cout <<  "well played " << endl ;
	}
	else {
		cout << "that was a close one " << endl ;
	}
	waitforenter();
	clearScreen();
};

void lvl_up(int& xp, int& xp_, int& lvl, int& damage, int& maxhealth) {
	bool test;
	do {
		test = true;
		if (xp >= xp_) {
			damage += damage*2 ;
			xp = xp - xp_;
			xp_ += xp_ * 4;
			lvl++;
			maxhealth += maxhealth * 3;
			test = false;
			cout << "good job lvl up"<< endl ;
		}
	} while (!test);
};
void waitforenter() {
	system("pause");
}