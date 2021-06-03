#ifndef PROVEEDOR_H
#define PROVEEDOR_H


#include "Persona.h"

class Proveedor: public Persona/// no me convence que sea por herencia
{
    private:
        char condicionFiscal[50];

    public:
        ///constructor
        Proveedor();

        ///sets
        void setCondicionFiscal(const char*);
        void cargarTodo();


        ///gets
        const char* getCondicionFiscal();
        void mostrarTodo();

        ///leer de disco
        bool leerDeDisco(int);

        ///grabar de disco
        bool grabarEnDisco();

        ///destructor
        ~Proveedor();



};


#endif // PROVEEDOR_H
