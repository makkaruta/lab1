// ���������� ����������������: ������������ ������ �1

#include "LIST.h"
#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;

int main(void)
{
	int ch, dl, mon;
	bool flag = false;
	system("chcp 1251>nul");
	LIST* lt;
	system("cls");
	while (flag == false) {
		cout << "1: ������ ������." << endl << "2: �������� �� ������� �� ���������." << endl << "3: �����." << endl;
		cin >> ch;
		switch (ch){
    case (1):
        lt = new LIST;
        flag = true;
		break;
    case (2):
		lt = new LIST(0);
		flag = true;
		break;
    case (3):
        return 0;
    default:
        cout << "����������, ������� ����� �������� �� ������." << endl;
		}
	}
	(*lt).srt();
	while (1) {
		cout << "1: ����� ������." << endl << "2: ������������ ������." << endl << "3: ����� �� ������ ��������." << endl << "4: �����." << endl;
		cin >> ch;
		switch (ch) {
    case (1):
        (*lt).show();
        break;
    case (2):
		delete lt;
		lt = new LIST;
        (*lt).srt();
		break;
    case (3):
		cout << "������� �����: ";
        cin >> mon;
        (*lt).dispmon(mon);
        break;
    case (4):
        delete lt;
		return 0;
    default:
        cout << "����������, ������� ����� �������� �� ������." << endl;
		}
    }
}
