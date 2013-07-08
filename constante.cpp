#include "constante.h"


constante::constante()
{
    //ctor
}

constante::~constante()
{
    //dtor
}

/** \brief comprueba si el caracter ingresado es un numero
 * \param un caracter de tipo char
 * \return true o false segun el paremetro
 *
 */
bool constante::esNumero(C caracter)
{
    if(caracter>=49 && caracter<=57)
        return true;
    return false;
}


/** \brief extrae solo los numeros de una cadena ingresada
 * \param una cadena de tipo char*
 * \return un numero
 *
 */
E constante::sacarNumero(pC cadena)
{
    E Nnum;
    string Ncad;
    for(E i=0;i<strlen(cadena);++i)
    {
        if(esNumero(cadena[i]))
        {
            Ncad[i]=cadena[i];
            Ncad+=cadena[i];
        }
    }
    Nnum=atoi(Ncad.c_str());
    return Nnum;
}
