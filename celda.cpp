#include "celda.h"

celda::celda()
{
    //ctor
}

celda::~celda()
{
    //dtor
}

/** \brief comprueba si el caracter ingresado es una letra
 *
 * \param un caracter tipo char
 * \return true o false segun el parametro
 *
 */
bool celda::esLetra(C caracter)
{
    if(caracter>=97 && caracter<=122 ||
       caracter>=65 && caracter<=90)
        return true;
    return false;
}

/** \brief extrae solo las letras de una cadena ingresada
 *
 * \param una cadena de tipo char*
 * \return devuelve un caracter alfabetico
 *
 */
C celda::sacarLetra(pC cadena)
{
    C Nlet;
    E i=0;
    for(;i<strlen(cadena);++i)
    {
        if(esLetra(cadena[i]))
        {
            Nlet=cadena[i];
            return Nlet;
        }
    }
}

