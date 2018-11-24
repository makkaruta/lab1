#pragma once

#include <iostream>
#define PHMAX 11
#define FMAX 20
#define LMAX 20

using namespace std;

class NOTE
{
private:
	char* lastname;
    char* firstname;
	char* phone;
	int date[3];
public:
    NOTE();
    NOTE(int n);
    ~NOTE();
    void setfirstname(char* fname);
    void setlastname(char* lname);
    void setphone(char* ph);
    void setdate(int d, int m, int y);
	char* getlastname();
    char* getfirstname();
    char* getphone();
    int getday();
    int getmon();
    int getyear();
	void show();
	friend ostream& operator <<(ostream& output, NOTE& pointer);
	friend void operator >>(istream& input, NOTE& pointer);
};

