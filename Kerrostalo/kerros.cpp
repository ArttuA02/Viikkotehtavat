#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2,100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double h)
{
    double kulutus = as1.laskeKulutus(h);
    kulutus = kulutus + as2.laskeKulutus(h);
    kulutus = kulutus + as3.laskeKulutus(h);
    kulutus = kulutus + as4.laskeKulutus(h);
    return kulutus;
}
