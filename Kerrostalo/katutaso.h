#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include "asunto.h"

class Katutaso:public Kerros
{
public:
    Katutaso();
    virtual void maaritaAsunnot()override;
    virtual double laskeKulutus(double)override;
    Asunto as1, as2;
};

#endif // KATUTASO_H
