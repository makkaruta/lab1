#include "NOTE.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

using namespace std;

NOTE::NOTE()
{
    lastname = new char[LMAX];
	firstname = new char[FMAX];
	phone = new char [PHMAX];
    cout << "Фамилия: ";					cin >> lastname;
	cout << "Имя: ";					    cin >> firstname;
	cout << "Номер телефона: ";				cin >> phone;
	cout << "Дата рождения: " << endl;
	cout << "\tДень: ";                     cin >> date[0];
	cout << "\tМесяц: ";                    cin >> date[1];
	cout << "\tГод: ";                      cin >> date[2];
};

char* NOTE::getlastname() { return lastname; }
char* NOTE::getfirstname() { return firstname; }
int NOTE::getmon() { return date[1]; }

void NOTE::show()
{
	cout << lastname << " " << firstname << endl << "Номер телефона: " << phone << endl << "Дата рождения: " << date[0] << "." << date[1] << "." << date[2] << endl;
}
