#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto
{
public:
    Asunto();
    void maarita(int asukasmaara, int neliot);
    double laskeKulutus(double);

    int asukasmaara;
    int neliot;
};

#endif // ASUNTO_H
