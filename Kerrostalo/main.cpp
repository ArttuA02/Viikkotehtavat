#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

int main()
{
    Kerrostalo * pKerrostalo;
    pKerrostalo = new Kerrostalo;
    double tulos = pKerrostalo->laskeKulutus(1);
    cout<<"Kerrostalon kokonaiskulutus = "<<tulos<<endl;
    delete pKerrostalo;
    return 0;
}
