#ifndef CELDA_H
#define CELDA_H


class celda
{
    public:
        celda();
        virtual ~celda();
        void conversion(char* &);
        bool esLetra(char);
        void sacarLetra(char*);
        bool esNumero(char);
        int sacarNumero(char*);

    protected:
    private:
        char* nombre;
        char *letra;
        char* simbolo;
        int numero;

};

#endif // CELDA_H
