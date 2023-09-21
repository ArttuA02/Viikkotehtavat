#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double h)
{
    double kulutus = as1.laskeKulutus(h);
    kulutus = kulutus + as2.laskeKulutus(h);
    kulutus = kulutus + Kerros::laskeKulutus(h);
    return kulutus;
}
