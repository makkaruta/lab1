#include "NOTE.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

using namespace std;

NOTE::NOTE()
{
    cin >> *this;
    cout << "\tЗапись создана." << endl << endl;
};

NOTE::NOTE(int n)
{
    bool flag = false;
    switch(n){
case 1:
    lastname = "Костава";
    firstname = "Джорджи";
    phone = "89117563240";
    date[0] = 4;
    date[1] = 7;
    date[2] = 1967;
    flag = true;
    break;
case 2:
    lastname = "Дрекс";
    firstname = "Корман";
    phone = "89117565753";
    date[0] = 21;
    date[1] = 3;
    date[2] = 1976;
    flag = true;
    break;
case 3:
    lastname = "Венс";
    firstname = "Саймон";
    phone = "89117567450";
    date[0] = 30;
    date[1] = 10;
    date[2] = 1983;
    flag = true;
    break;
case 4:
    lastname = "Каулинский";
    firstname = "Кевин";
    phone = "89117564386";
    date[0] = 15;
    date[1] = 11;
    date[2] = 1978;
    flag = true;
    break;
case 5:
    lastname = "Эскалли";
    firstname = "Мари";
    phone = "89117565462";
    date[0] = 27;
    date[1] = 11;
    date[2] = 1974;
    flag = true;
    break;
case 6:
    lastname = "Лорун";
    firstname = "Даник";
    phone = "89117563745";
    date[0] = 4;
    date[1] = 1;
    date[2] = 1993;
    flag = true;
    break;
case 7:
    lastname = "Грейр";
    firstname = "Стефани";
    phone = "89117560455";
    date[0] = 2;
    date[1] = 4;
    date[2] = 1993;
    flag = true;
    break;
case 8:
    lastname = "Хассе";
    firstname = "Филипп";
    phone = "89117562316";
    date[0] = 18;
    date[1] = 4;
    date[2] = 1989;
    flag = true;
    break;
case 0:
    break;
default:
    lastname = "_";
    firstname = "_";
    phone = "00000000000";
    date[0] = 0;
    date[1] = 0;
    date[2] = 0;
    }
    if (flag == true)
        cout << "\tЗапись по умолчанию создана." << endl;
    else
        cout << "\tПустая запись создана." << endl;
};

NOTE::NOTE(const NOTE &nt)
{
    lastname = new char[sizeof(nt.getlastname())];
    lastname = nt.getlastname();
    firstname = new char[sizeof(nt.getfirstname())];
    firstname = nt.getfirstname();
    phone = new char[sizeof(nt.getphone())];
    phone = nt.getphone();
    date[0] = nt.getday();
    date[1] = nt.getmon();
    date[2] = nt.getyear();
    cout << "\tЗапись копирована." << endl;
}

NOTE::~NOTE()
{
    cout << "\tЗапись удалена." << endl;
};

void NOTE::setfirstname(char* fname) { firstname = fname; };
void NOTE::setlastname(char* lname) { lastname = lname; };
void NOTE::setphone(char* ph) { phone = ph; };
void NOTE::setdate(int d, int m, int y) { date[0] = d; date[1] = m; date[2] = y; };
char* NOTE::getlastname() const { return lastname; }
char* NOTE::getfirstname() const { return firstname; }
char* NOTE::getphone() const { return phone; }
int NOTE::getday() const { return date[0]; }
int NOTE::getmon() const { return date[1]; }
int NOTE::getyear() const { return date[2]; }

ostream& operator <<(ostream& output, NOTE& pointer)
{
	cout << "\t" << pointer.lastname << " " << pointer.firstname << endl << "\tНомер телефона: " << pointer.phone << endl << "\tДата рождения: " << pointer.date[0] << "." << pointer.date[1] << "." << pointer.date[2] << endl;
	return output;
}
void operator >> (istream& input, NOTE& pointer)
{
	pointer.lastname = new char[LMAX];
	pointer.firstname = new char[FMAX];
	pointer.phone = new char [PHMAX];
    cout << "Фамилия: ";					cin >> pointer.lastname;
	cout << "Имя: ";					    cin >> pointer.firstname;
	cout << "Номер телефона: ";				cin >> pointer.phone;
	cout << "Дата рождения: " << endl;
	cout << "\tДень: ";                     cin >> pointer.date[0];
	cout << "\tМесяц: ";                    cin >> pointer.date[1];
	cout << "\tГод: ";                      cin >> pointer.date[2];
}

