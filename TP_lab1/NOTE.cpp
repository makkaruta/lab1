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
    cout << "�������: ";					cin >> lastname;
	cout << "���: ";					    cin >> firstname;
	cout << "����� ��������: ";				cin >> phone;
	cout << "���� ��������: " << endl;
	cout << "\t����: ";                     cin >> date[0];
	cout << "\t�����: ";                    cin >> date[1];
	cout << "\t���: ";                      cin >> date[2];
};

char* NOTE::getlastname() { return lastname; }
char* NOTE::getfirstname() { return firstname; }
int NOTE::getmon() { return date[1]; }

void NOTE::show()
{
	cout << lastname << " " << firstname << endl << "����� ��������: " << phone << endl << "���� ��������: " << date[0] << "." << date[1] << "." << date[2] << endl;
}
