#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef master("Gordon Ramsay");
    ItalianChef jr("Hans Valimaki");
    master.makeSalad();
    master.makeSoup();
    jr.makePasta(100,250);

}
