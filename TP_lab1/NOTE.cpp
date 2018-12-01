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
    date[DAY] = 4;
    date[MON] = 7;
    date[YEAR] = 1967;
    flag = true;
    break;
case 2:
    lastname = "Дрекс";
    firstname = "Корман";
    phone = "89117565753";
    date[DAY] = 21;
    date[MON] = 3;
    date[YEAR] = 1976;
    flag = true;
    break;
case 3:
    lastname = "Венс";
    firstname = "Саймон";
    phone = "89117567450";
    date[DAY] = 30;
    date[MON] = 10;
    date[YEAR] = 1983;
    flag = true;
    break;
case 4:
    lastname = "Каулинский";
    firstname = "Кевин";
    phone = "89117564386";
    date[DAY] = 15;
    date[MON] = 11;
    date[YEAR] = 1978;
    flag = true;
    break;
case 5:
    lastname = "Эскалли";
    firstname = "Мари";
    phone = "89117565462";
    date[DAY] = 27;
    date[MON] = 11;
    date[YEAR] = 1974;
    flag = true;
    break;
case 6:
    lastname = "Лорун";
    firstname = "Даник";
    phone = "89117563745";
    date[DAY] = 4;
    date[MON] = 1;
    date[YEAR] = 1993;
    flag = true;
    break;
case 7:
    lastname = "Грейр";
    firstname = "Стефани";
    phone = "89117560455";
    date[DAY] = 2;
    date[MON] = 4;
    date[YEAR] = 1993;
    flag = true;
    break;
case 8:
    lastname = "Хассе";
    firstname = "Филипп";
    phone = "89117562316";
    date[DAY] = 18;
    date[MON] = 4;
    date[YEAR] = 1989;
    flag = true;
    break;
case 0:
    break;
default:
    lastname = "_";
    firstname = "_";
    phone = "00000000000";
    date[DAY] = 0;
    date[MON] = 0;
    date[YEAR] = 0;
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
    date[DAY] = nt.getday();
    date[MON] = nt.getmon();
    date[YEAR] = nt.getyear();
    cout << "\tЗапись копирована." << endl;
}

NOTE::~NOTE()
{
    cout << "\tЗапись удалена." << endl;
};

void NOTE::setfirstname(char* fname) { firstname = fname; };
void NOTE::setlastname(char* lname) { lastname = lname; };
void NOTE::setphone(char* ph) { phone = ph; };
void NOTE::setdate(int d, int m, int y) { date[DAY] = d; date[MON] = m; date[YEAR] = y; };
char* NOTE::getlastname() const { return lastname; }
char* NOTE::getfirstname() const { return firstname; }
char* NOTE::getphone() const { return phone; }
int NOTE::getday() const { return date[DAY]; }
int NOTE::getmon() const { return date[MON]; }
int NOTE::getyear() const { return date[YEAR]; }

ostream& operator <<(ostream& output, NOTE& pointer)
{
	cout << "\t" << pointer.lastname << " " << pointer.firstname << endl << "\tНомер телефона: " << pointer.phone << endl << "\tДата рождения: " << pointer.date[DAY] << "." << pointer.date[MON] << "." << pointer.date[YEAR] << endl;
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
	cout << "\tДень: ";                     cin >> pointer.date[DAY];
	cout << "\tМесяц: ";                    cin >> pointer.date[MON];
	cout << "\tГод: ";                      cin >> pointer.date[YEAR];
}

