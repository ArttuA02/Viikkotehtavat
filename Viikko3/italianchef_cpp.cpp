#include "italianchef.h"

using namespace std;

ItalianChef::ItalianChef(string n):Chef(n)
{

}

string ItalianChef::getName()
{
    return "huuhaa";
}

void ItalianChef::makePasta(int vesi,int jauhot)
{

    cout<<"Chef "<<name<<" makes pasta with a special recipe"<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
}
