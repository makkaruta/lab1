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
	cout << "���: ";					    cin >> firstname;
	cout << "�������: ";					cin >> lastname;
	cout << "����� ��������: ";				cin >> phone;
	/*cout << "���� �������� � ������� ��.��.����: ";   �� �������� �_�
	scanf("%[^:\n]%*c", sday);
	scanf("%[^:\n]%*c", smonth);
	scanf("%[^\n]%*c", syear);
	date[0] = atoi(sday);
	date[1] = atoi(smonth);
	date[2] = atoi(syear);*/
	cout << "���� ��������: " << endl;
	cout << "\t����: ";                     cin >> date[0];
	cout << "\t�����: ";                    cin >> date[1];
	cout << "\t���: ";                      cin >> date[2];
};

int NOTE::getmon() { return date[1]; }
char* NOTE::getfirstname() { return firstname; }
char* NOTE::getlastname() { return lastname; }

void NOTE::show()
{
	cout << firstname << " " << lastname << endl << "����� ��������: " << phone << endl << "���� ��������: " << date[0] << "." << date[1] << "." << date[2] << endl;
}

