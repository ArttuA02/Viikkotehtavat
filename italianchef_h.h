#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class ItalianChef:private Chef
{
public:
    ItalianChef(string);
    string getName();
    void makePasta(int,int);

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
