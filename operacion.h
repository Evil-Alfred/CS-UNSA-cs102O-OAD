/** \class operacion
 *  \brief clase hija de Nodo donde van los operadores:+,-,*,/
 *
 */

#ifndef OPERACION_H
#define OPERACION_H
#include "Nodo.h"
class operacion:public Nodo
{
    public:
        operacion();
        virtual ~operacion();

    protected:
    private:
        Nodo *Nizq, *Nder;
};

#endif // OPERACION_H
