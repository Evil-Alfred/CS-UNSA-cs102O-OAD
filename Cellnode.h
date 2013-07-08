/** \class celda
 *  \brief Clase celda que selecciona el nombre de la celda
 *  y el puntero a una celda
 *
 */

//REMEMBER: USAR BABEL PARA LINUX O DOXYGEN PARA WINDOWS
#ifndef CELLNODE_H
#define CELLNODE_H

#include "Nodo.h"
#include <cstring>
//#include <iostream>
//using namespace std;
typedef celda* ptrCell//ptrCell es un dato del tipo celda*

class Cellnode:public Nodo
{
    public:
        Cellnode(ptrCell _ptrCell):ptr_celda(_ptrCell){};
        virtual ~Cellnode();
//        bool esLetra(C);
  //      C sacarLetra(pC);
        virtual cell_value get_cell_value(){return ptrCell->}

        //
        /*
        celda(int x=0,int y=0)
            :fila(x),columna(y){}//constructor
        int getFila() const{return fila;}
        void setFila(int x){fila=x;}
        int getColumna() const{return columna;}
        void setColumna(int y){columna=y;}
        */


    protected:
    private:
        pC nombre;
        C letra;
        pC simbolo;
        ptrCell ;


        //int fila,columna;

};

#endif // CELLNODE_H
