/** \class constante
 *  \brief clase constante donde selecciona
 *  los numeros de la clase base Nodo(la expresion)
 *
 */

#ifndef CONSTANTE_H
#define CONSTANTE_H
#include "Nodo.h"
#include <cstring>
#include <iostream>
#include <cstdlib>

using namespace std;
class constante:public Nodo
{
    public:
        constante();
        virtual ~constante();
        bool esNumero(C);
        E sacarNumero(pC);
        virtual cell_value get_cell_value();
    protected:
    private:
        E numero;
        cell_value Constnumber;


};

#endif // CONSTANTE_H
