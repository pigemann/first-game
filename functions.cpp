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
string monsterfight (string , int& , int , int , int , int , entity );
void clearScreen();
void lvl_up ( int& , int& , int& , int& , int& );
void fight(string name, int& hp, int damage, int& xp, int& lvl, int& xp_, int m) {
	string msg;
	entity dragon( "dragon",1000, 50000, 250 );
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

			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, goblin);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (30 > a >= 10) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, zombie);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (10 > a >= 5) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, squeleten);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (5 > a >= 3) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, g_troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 2:
		if (a >= 50) {

			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, goblin);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (50 > a >= 20) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, zombie);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (20 > a >= 10) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, squeleten);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (10 > a >= 7) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, g_troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 3:
		if (a >= 70) {

			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, goblin);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (70 > a >= 40) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, zombie);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (40 > a >= 20) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, squeleten);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (20 > a >= 12) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, g_troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 4:
		if (a >= 80) {

			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, goblin);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (80 > a >= 65) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, zombie);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (65 > a >= 45) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, squeleten);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (45 > a >= 15) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, g_troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 5:
		if (a >= 95) {

			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, goblin);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (95 > a >= 80) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, zombie);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (80 > a >= 60) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, squeleten);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else if (60 > a >= 35) {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}
		else {
			
			msg = monsterfight(name, hp, damage, xp, lvl, xp_, g_troll);
			lvl_up(xp, xp_, lvl, damage, m);
		}

		break;
	case 6:
		cout << name << " : i am here to take your soul fucking dragon ";
		msg = monsterfight(name, hp, damage, xp, lvl, xp_, dragon);
		lvl_up(xp, xp_, lvl, damage, m);
		break;
	}
};
string story() {
	string name;
	cout << "what is you name "<< endl;
	cin >> name;
	clearScreen();
	cout << "Hello, " << name << "." << endl << "Our beloved Queen Pigeman is in grave danger, held captive by a dragon." << endl << "Your mission is to journey to her rescue." << endl << "Along the way, you will face challenges that will help you grow stronger and more skilled." << endl << "This journey is not just about reaching the dragon but also about becoming the hero you are destined to be." << endl << "---> press entre to continue " << endl ;
	waitforenter();
	return (name);
};

string adventure(string name_) {
	int dragon_hp = 1;
	player player_( name_ , 100, 0, 10);
	player_.xp_needed = 10;
	player_.lvl = 1;
	int choice, a;
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
				cout << "you encoutred a monster" << endl << "---> press entre to continue " << endl;
				waitforenter();
				clearScreen();
				fight (player_.name, player_.hp, player_.damage, player_.xp, player_.lvl, player_.xp_needed, m);

				break;
			case 1:
				cout << "looks like its safe for now" << endl << "---> press entre to continue " << endl;
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
			case (1 || 2 || 3):
				if (player_.hp > m - ((double)m * (20 / 100)))
				{
					player_.hp = m;
				}
				else {
					player_.hp += m * (20 / 100);
				}
				break;
			default:
				cout << "you are getting tired ." << endl << "be carefull if you fall asleep you will die" << endl << "---> press entre to continue " << endl;
				waitforenter();
				clearScreen();
				break;
			case 6:
				cout << name_ << ":ahhh i feel tired i should probably take a nap. " << endl << "zzzzzzzzzzzzzzzzzzzzzzz";
				player_.hp = 0;
				clearScreen();
				break;
			}
			break;
		default:
			cout << "invalid choice press entre et continue " << endl;
			waitforenter();
			clearScreen();
			break;
		}
	} while (player_.hp != 0 && dragon_hp != 0);
	if (player_.hp == 0) {
		return "you lost";
	}
	else {
		return "you won and saved the queen pigeman";
	}
};

void clearScreen() {
	system("cls");
};


string monsterfight(string name, int& hp, int damage, int xp, int lvl, int xp_, entity monster) {
	int random_num ;
	cout << name << ":back  off dirty "<< monster.name <<endl ;
	do {
		cout << "name:" << name << "         lvl:" << lvl << endl;
		cout << "health:" << hp << "    |    monster hp:" << monster.hp << endl;
		cout << "damage:" << damage << "    |    monster damage:" << monster.damage << endl;
		cout << "xp:" << xp << endl;
		cout << "xp for next lvl:" << xp_ << endl;
		cout << "1.attaque" << endl << "2.runn" << endl;
		cin >> random_num;
		switch (random_num)
		{
		default:
			clearScreen();
			cout << "invalid choice press entre et continue " << endl;
			waitforenter();
			break;
		case 1:
			monster.hp -= damage;
			hp -= monster.damage;
			break;
		case 2:
			clearScreen();
			cout << "hell nah bro i am not fighting that thing" << endl << "----> press entre to continue";
			waitforenter();
			break;
		}
		clearScreen();

	} while (hp > 0 && monster.hp > 0 && random_num != 2);
	if (hp <= 0) {
		return "you died";
	}
	else if (monster.hp <= 0) {
		return "well played ";
	}
	else {
		return "that was a close one ";
	}

};

void lvl_up(int& xp, int& xp_, int& lvl, int& damage, int& maxhealth) {
	bool test;
	do {
		test = true;
		if (xp >= xp_) {
			xp -= xp_;
			xp_ += xp_ * xp_;
			lvl++;
			damage += damage * 2;
			maxhealth += maxhealth * 3;
			test = false;
		}
	} while (!test);
};
void waitforenter() {
	system("pause");
}