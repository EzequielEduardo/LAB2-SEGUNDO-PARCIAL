#ifndef PERSONA_H
#define PERSONA_H
#include "Fecha.h"

class Persona
{
    protected:
        char nombre[50];
        char apellido [50];
        int cuil;
        int cuit;
        char domicilio[50];
        char localidad[50];
        int telefono;
        char email[50];
        Fecha fecha;

    public:

        ///constr
        Persona();


        ///sets
        void cargar();
        void setNombre(const char*);
        void setApellido(const char*);
        void setCuil(int );
        void setCuit(int );
        void setDomicilio(const char*);
        void setLocalidad(const char*);
        void setTelefono(int);
        void setEmail(const char*);

        ///gets
        void mostrar();
        const char* getNombre();
        const char* getApellido();
        int         getCuil();
        int         getCuit();
        const char* getDomicilio();
        const char* getLocalidad();
        int         getTelefono();
        const char* getEmail();

        ///destructor
        ~Persona();


};

#endif // PERSONA_H
