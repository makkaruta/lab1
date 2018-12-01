#pragma once

#include <iostream>
#define PHMAX 11
#define FMAX 20
#define LMAX 20
#define DAY_MON_YEAR 3
#define DAY 0
#define MON 1
#define YEAR 2

using namespace std;

class NOTE
{
private:
	char* lastname;
    char* firstname;
	char* phone;
	int date[DAY_MON_YEAR];
public:
    NOTE();
    NOTE(int n);
    NOTE(const NOTE &nt);
    ~NOTE();
    void setfirstname(char* fname);
    void setlastname(char* lname);
    void setphone(char* ph);
    void setdate(int d, int m, int y);
	char* getlastname() const;
    char* getfirstname() const;
    char* getphone() const;
    int getday() const;
    int getmon() const;
    int getyear() const;
	friend ostream& operator <<(ostream& output, NOTE& pointer);
	friend void operator >>(istream& input, NOTE& pointer);
};

