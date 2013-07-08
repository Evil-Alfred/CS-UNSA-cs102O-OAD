/** \class Nodo
 *  \brief Representa la clase base donde hay 3 tipos de nodos:
 *   -numero o constante
 *   -operacion
 *   -celda
 *   cada una es clas hija de Nodo
 */

#ifndef NODO_H
#define NODO_H

typedef int E;
typedef char* pC;
typedef char C;
typedef float cell_value;

class Nodo
{
    public:
        Nodo();
        virtual ~Nodo();
        virtual cell_value get_cell_value()=0;//funcion virtual pura

        //virtual double eval(double,double)=0;
        //void (*ptr)();

    protected:
    private:

        //string str;

};

#endif // NODO_H
