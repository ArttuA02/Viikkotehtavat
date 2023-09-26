#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
    Asunto * as1;
    Asunto * as2;
    Asunto * as3;
    Asunto * as4;
};

#endif // KERROS_H
