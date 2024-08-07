#include "woooow.h"

int main() {
	srand(time(nullptr));
	string name = story();
	string msg = adventure(name);
	cout << msg << endl ;
	cin.get() ;
};