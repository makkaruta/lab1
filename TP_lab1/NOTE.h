#pragma once

#define PHMAX 11
#define FMAX 20
#define LMAX 20

class NOTE
{
private:
	char* lastname;
    char* firstname;
	char* phone;
	int date[3];
public:
	NOTE();
	char* getlastname();
    char* getfirstname();
    int getmon();
	void show();
};

