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
        cout << "\tПожалуйста, введите номер варианта из списка." << endl;
		}
	}
	cout << endl << "Подождите, идёт сортировка:" << endl;
	(*lt).srt();
	while (1) {
		cout << endl << "1: Вывод списка." << endl << "2: Перезаписать список." << endl << "3: Поиск по месяцу рождения." << endl << "4: Выход." << endl;
		cin >> ch;
		switch (ch) {
    case (1):
        (*lt).show();
        break;
    case (2):
		delete lt;
		cout << endl;
		lt = new LIST;
        cout << "Подождите, идёт сортировка:" << endl;
        (*lt).srt();
		break;
    case (3):
		cout << "Введите месяц: ";
        cin >> mon;
        try
        {
            (*lt).dispmon(mon);
        }
        catch(int error)
        {
            switch(error) {
            case 301:
                cout << endl << "\tТакого месяца не существует." << endl;
                break;
            case 302:
                cout << endl << "\tТакие записи отсутствуют." << endl;
                break;
            default:
                cout << endl << "\tНеизвестная ошибка." << endl;
            }
        }
        break;
    case (4):
        delete lt;
		return 0;
    default:
        cout << "Пожалуйста, введите номер варианта из списка." << endl;
		}
    }
}
