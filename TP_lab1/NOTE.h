#pragma once

#define PHMAX 11
#define FMAX 20
#define LMAX 20

class NOTE
{
private:
	char* firstname;
	char* lastname;
	char phone[PHMAX];
	int date[3];
public:
	NOTE();
	char* getfirstname();
	char* getlastname();
	int getmon();
	void show();
};

