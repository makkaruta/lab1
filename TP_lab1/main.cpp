// ���������� ����������������: ������������ ������ �1

#include "LIST.h"
#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;

int main(void)
{
	int ch, dl, mon;
	system("chcp 1251>nul");
	LIST lt;
	system("cls");
	lt.srt();
	while (1) {
		cout << "1: ����� ������." << endl << "2: ����� ������." << endl << "3: ������� ������." << endl << "4: ����� �� ������ ��������." << endl << "5: �����." << endl;
		cin >> ch;
		switch (ch) {
		case (1):
		{
			lt.disp();
		}break;
		case (2):
		{
			lt.add();
			lt.srt();
		}break;
		case (3):
		{
			cout << "������� ����� �������� ��� ��������: ";
			cin >> dl;
			lt.del(dl);
		}break;
        case (4):
        {
            cout << "������� �����: ";
            cin >> mon;
            lt.dispmon(mon);
        }break;
		case (5): return 0;
		}
	}
}
