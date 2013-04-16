#include "celda.h"
#include <iostream>
#include <cstring>
using namespace std;
celda::celda()
{
    //ctor
}

celda::~celda()
{
    //dtor
}

bool celda::esLetra(char caracter)
{
    if(caracter>=97 && caracter<=122)
        return true;
    return false;
}
bool celda::esNumero(char caracter)
{
    if(caracter>=49 && caracter<=57)
        return true;
    return false;
}
void celda::sacarLetra(char* cadena)
{
    char* Ncad;
    int i=0,j;
    while(esLetra(cadena[i]))
    {
        cout<<cadena[i]<<endl;
        //cout<<"-"<<i<<"-"<<endl;
        Ncad= new char[i];
        for(j=0;j<=i;++j)
            Ncad[j]=cadena[j];

        i++;
    }
    cout<<Ncad<<"-"<<j;;

}
void celda::conversion(char* &nombre)
{

    char* letr;
    char* simb;
    int num;

    //cout<<letr<<" "<<num;
}
