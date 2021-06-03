#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Persona.h"

class Vendedor: public Persona{
    private:
        char turno[7];
        int sueldo;
    public:

        ///constructor
        Vendedor();

        ///sets
        void setTurno(const char *);
        void setSueldo(int);
        void cargarTodo();

        ///gets
        const char* getTurno();
        int getSueldo();
        void MostrarTodo();

        ///leer de disco
        bool leerDeDisco(int);

        ///grabar de disco
        bool grabarEnDisco();

        ///destructor
        ~Vendedor();
};

#endif // VENDEDOR_H
