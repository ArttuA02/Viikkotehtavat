#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Luotiin kerrostalo"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double h)
{
    double kulutus = eka.laskeKulutus(h);
    kulutus = kulutus + toka.laskeKulutus(h);
    kulutus = kulutus + kolmas.laskeKulutus(h);
    return kulutus;
}
