#include"LIST.h"
#include <iostream>
#include <cstring>
#include <malloc.h>
using namespace std;

LIST::LIST()
{
	notes = new NOTE[NN];
	amount = NN;
}

void LIST::disp()
{
	for (i = 0; i < NN; i++)
	{
		cout << i + 1 << ":" << endl;
		notes[i].show();
	}
}

void LIST::srt()
{
	for (j = 0; j < (NN - 1); j++)
		for (k = j + 1; k < NN; k++)
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

/* void LIST::add()  ÍÅ ÐÀÁÎÒÀÅÒ ëîìàåò âåñü ñïèñîê ïîñëå ââîäà íîâîé çàïèñè
{
    ++amount;
	NOTE* temp;
	temp = new NOTE;
	notes = (NOTE*)realloc(notes,amount * sizeof(NOTE*));
}

void LIST::del(int num) ÂÎÎÁÙÅ Â ÝÒÎÌ ÍÅ ÓÂÅÐÅÍÀ ÎÍÎ ÁÓÄÅÒ ÐÀÁÎÒÀÒÜ?
{
    --amount;
	if (sizeof(notes) / sizeof(NOTE) > num - 1)
		delete &notes[num];
} */
