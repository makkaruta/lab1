#pragma once

#include "NOTE.h"

#define NN 8
#define JANUARY 1
#define DECEMBER 12
#define ERROR_301 301
#define ERROR_302 302

class LIST
{
private:
	NOTE* notes;
	int i, j, k;
public:
	LIST();
	LIST(int d);
	~LIST();
    void show();
	void dispmon(int m);
	void srt();
    void add();
	void del(int num);
};

