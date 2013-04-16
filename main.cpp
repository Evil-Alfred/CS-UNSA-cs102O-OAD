#include <iostream>
#include "celda.h"

using namespace std;

int main()
{
    celda A;
    char* p="lu15ok";

    //cout<<p;
    cout<<A.esLetra('a')<<endl;
    A.sacarLetra(p);

    return 0;
}
