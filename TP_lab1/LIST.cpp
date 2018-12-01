#include"LIST.h"
#include "NOTE.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
using namespace std;

LIST::LIST()
{
    cout << "Введите " << NN << " записей:" << endl << endl;
    notes = new NOTE[NN];
    cout << "\tСписок создан." << endl;
}

LIST::LIST(int d)
{
    notes = (NOTE*)malloc(sizeof(NOTE)*NN);
    for (int i = 0; i < NN; ++i)
    {
        notes[i] = *(new NOTE(i+1));
    }
    cout << "\tСписок по умолчанию создан." << endl;
}

LIST::~LIST()
{
	for (i = 0; i < NN; ++i)
        delete &notes[i];
    cout << "\tСписок удалён." << endl;
};

void LIST::show()
{
	for (int i = 0; i < NN; ++i)
		cout << i+1 << ":" << endl << *(notes + i);
}

void LIST::dispmon(int m)
{
    int mn = 0;
    if (m > 12 || m < 1)
    {
        throw 301;
    }
	else
	{
	    for (i = 0; i < NN; ++i)
        {
            if (notes[i].getmon() == m)
            {
                mn++;
                cout << mn << ":" << endl << notes[i];
            }
        }
        if (mn < 1)
            throw 302;
	}
}

void LIST::srt()
{

    char* name1;
	char* name2;
	char* name3;
	char* name4;
	for (j = 0; j < (NN - 1); ++j)
    {
		for (k = j + 1; k < NN; ++k)
		{
			name1 = notes[j].getlastname();
			name2 = notes[k].getlastname();
			if (strcmp(name1, name2) > 0)
            {
                swap(notes[k], notes[j]);
            }
			else if (strcmp(name1, name2) == 0)
			{
				name3 = notes[j].getfirstname();
				name4 = notes[k].getfirstname();
				if (strcmp(name3, name4) > 0)
					swap(notes[k], notes[j]);
			}
		}
    }
    cout << "Успешно!" << endl;
}
