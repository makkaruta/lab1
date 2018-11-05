#pragma once

#include "NOTE.h"
#define NN 2

class LIST
{
private:
	NOTE* notes;
	int amount;
	int i, j, k;
	char* name1;
	char* name2;
	char* name3;
	char* name4;
public:
	LIST();
	void disp();
	void dispmon(int m);
	void srt();
    void add();
	void del(int num);
};

