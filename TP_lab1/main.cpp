// Технологии программирования: Лабораторная работа №1

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
		cout << "1: Вывод списка." << endl << "2: Новая запись." << endl << "3: Удалить запись." << endl << "4: Поиск по месяцу рождения." << endl << "5: Выход." << endl;
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
			cout << "Введите номер элемента для удаления: ";
			cin >> dl;
			lt.del(dl);
		}break;
        case (4):
        {
            cout << "Введите месяц: ";
            cin >> mon;
            lt.dispmon(mon);
        }break;
		case (5): return 0;
		}
	}
}
