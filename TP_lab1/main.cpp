// Технологии программирования: Лабораторная работа №1

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
		cout << "1: Ввести список." << endl << "2: Работать со списком по умолчанию." << endl << "3: Выход." << endl;
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
        cout << "Пожалуйста, введите номер варианта из списка." << endl;
		}
	}
	(*lt).srt();
	while (1) {
		cout << "1: Вывод списка." << endl << "2: Перезаписать список." << endl << "3: Поиск по месяцу рождения." << endl << "4: Выход." << endl;
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
		cout << "Введите месяц: ";
        cin >> mon;
        (*lt).dispmon(mon);
        break;
    case (4):
        delete lt;
		return 0;
    default:
        cout << "Пожалуйста, введите номер варианта из списка." << endl;
		}
    }
}
