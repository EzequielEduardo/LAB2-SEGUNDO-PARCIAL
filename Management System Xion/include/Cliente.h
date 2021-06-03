#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"

class Cliente: public Persona/// no me convence que sea por herencia
{
    private:
        char condicionFiscal[50];

    public:
        ///constructor
        Cliente();

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
        ~Cliente();



};

#endif // CLIENTE_H
