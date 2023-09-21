#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerros.h"
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    virtual double laskeKulutus(double);

private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif // KERROSTALO_H
