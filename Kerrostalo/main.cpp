#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

int main()
{
    Kerrostalo olio1;
    double tulos = olio1.laskeKulutus(1);
    cout<<"Kokonaiskulutus = "<<tulos<<endl;
    return 0;
}
