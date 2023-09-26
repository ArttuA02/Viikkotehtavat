#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Luotiin kerrostalo"<<endl;

    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double h)
{
    double kulutus = eka->laskeKulutus(h);
    kulutus += toka->laskeKulutus(h);
    kulutus += kolmas->laskeKulutus(h);
    return kulutus;
}
