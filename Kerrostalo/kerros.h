#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
    Asunto as1, as2, as3, as4;
};

#endif // KERROS_H
