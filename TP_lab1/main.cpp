// ���������� ����������������: ������������ ������ �1

#include "LIST.h"
#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;

int main(void)
{
	int ch, dl;
	system("chcp 1251>nul");
	LIST lt;
	system("cls");
	lt.srt();
	while (1) {
		cout << "1: ����� ������." << endl << "2: ����� ������." << endl << "3: ������� ������." << endl << "4: �����." << endl;
		cin >> ch;
		switch (ch) {
		case (1):
		{
			lt.disp();
		}break;
		case (2):
		{
		    cout << "���� � ���������" << endl;
			//lt.add();
		}break;
		case (3):
		{
            cout << "���� � ���������" << endl;
			//cout << "������� ����� �������� ��� ��������:";
			//cin >> dl;
			//lt.del(dl);
		}break;
		case (4): return 0;
		}
	}
}
