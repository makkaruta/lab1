#include "NOTE.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

NOTE::NOTE()
{
	char sday[2], smonth[2], syear[4];
	firstname = new char[FMAX];
	lastname = new char[LMAX];
	cout << "Имя: ";					    cin >> firstname;
	cout << "Фамилия: ";					cin >> lastname;
	cout << "Номер телефона: ";				cin >> phone;
	/*cout << "Дата рождения в формате ДД.ММ.ГГГГ: ";   НЕ РАБОТАЕТ Т_Т
	scanf("%[^:\n]%*c", sday);
	scanf("%[^:\n]%*c", smonth);
	scanf("%[^\n]%*c", syear);
	date[0] = atoi(sday);
	date[1] = atoi(smonth);
	date[2] = atoi(syear);*/
	cout << "Дата рождения: " << endl;
	cout << "\tДень: ";                     cin >> date[0];
	cout << "\tМесяц: ";                    cin >> date[1];
	cout << "\tГод: ";                      cin >> date[2];
};

int NOTE::getmon() { return date[1]; }
char* NOTE::getfirstname() { return firstname; }
char* NOTE::getlastname() { return lastname; }

void NOTE::show()
{
	cout << firstname << " " << lastname << endl << "Номер телефона: " << phone << endl << "Дата рождения: " << date[0] << "." << date[1] << "." << date[2] << endl;
}

