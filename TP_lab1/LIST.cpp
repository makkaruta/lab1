#include"LIST.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

LIST::LIST()
{
    amount = NN;
	notes = new NOTE[amount];
}

void LIST::disp()
{
    if (amount == 0)
    {
        cout << "������ �����������." << endl;
    }
	for (i = 0; i < amount; i++)
	{
		cout << i+1 << ":" << endl;
		notes[i].show();
	}
}

void LIST::dispmon(int m)
{
    int mn = 0;
    if (m > 12 || m < 1)
    {
        cout << "������ ������ �� ����������." << endl;
    }
	else
	{
	    for (i = 0; i < amount; i++)
        {
            if (notes[i].getmon() == m)
            {
                mn++;
                cout << mn << ":" << endl;
                notes[i].show();
            }
        }
        if (mn < 1)
            cout << "����� ������ �����������." << endl;
	}
}

void LIST::srt()
{
	for (j = 0; j < (amount - 1); j++)
		for (k = j + 1; k < amount; k++)
		{
			name1 = notes[j].getlastname();
			name2 = notes[k].getlastname();
			if (strcmp(name1, name2) > 0)
				swap(notes[k], notes[j]);
			else if (strcmp(name1, name2) == 0)
			{
				name3 = notes[j].getfirstname();
				name4 = notes[k].getfirstname();
				if (strcmp(name3, name4) > 0)
					swap(notes[k], notes[j]);
			}
		}
}

void LIST::add()
{
    cout << "������� ����� ������� ������:" << endl;
	NOTE temp;
	notes = (NOTE*)realloc(notes, (amount+1)*sizeof(NOTE));
	notes[amount] = temp;
    ++amount;
    cout << "�������." << endl;
}

void LIST::del(int num)
{
	if (amount == 0)
	{
		cout << "��� �� ����� ������ ��� ��������." << endl;
	}
	else if((num > 0) && (amount > num-1))
	{
	    --num;
	    --amount;
	    if (amount == 0)
        {
            delete[] notes;
            cout << "�������. ��� ������ �������." << endl;
        }
        else
        {
            for (int d = num; d < amount; d++)
                notes[d] = notes[d+1];
            notes = (NOTE*)realloc(notes, amount*sizeof(NOTE));
            cout << "�������." << endl;
        }
	}
	else
    {
        cout << "������ ��� ����� ������� �� ����������." << endl;
    }
}
