#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

	// string used to store users menu choice
	string menuChoice;
	cout << "Yo! What's up pimp?\n" << "We got some extra dank items on the menu today...why don't you take a look?\n";
	do {

		cout << "------------------\n";
		cout << "Hundi's R Us Menu\n";
		cout << "1. Clams\n" << "2. Hambugers\n" << "3. DaChronic\n" << "4. Hundis\n";
		cout << "------------------\n";
		cin >> menuChoice;
		
		// User selected something that's not on the menu
		if (menuChoice != "Clams" && menuChoice != "Hamburgers" && menuChoice != "DaChronic" && menuChoice != "Hundis") {
			cout << "Sorry pimp, we don't have that on the menu.\n" << "Maybe take another look at the menu my guy.\n";
			cout << endl;
			
		}


	} while (menuChoice != "Clams" && menuChoice != "Hamburgers" && menuChoice != "DaChronic" && menuChoice != "Hundis");
	cout << "Good choice my dude. Coming right up!\n";
	system("pause");
    return 0;
}
