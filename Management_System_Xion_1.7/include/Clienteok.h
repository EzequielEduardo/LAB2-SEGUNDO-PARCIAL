#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEOK_H
#define CLIENTEOK_H

#include "Fecha.h"

class Clienteok
{
		private:


		char nombre[50];
        char apellido [50];
        int cuil;
        char domicilio[50];
        char localidad[50];
        int telefono;
        char email[50];



	public:
		Clienteok (){
			//nombre="\0";

		};
        void setNombre(const char*);
        void setApellido(const char*);
        void setCuil(int );
        void setCuit(int );
        void setDomicilio(const char*);
        void setLocalidad(const char*);
        void setTelefono(int);
        void setEmail(const char*);
       // void setfechaNac(int,int,int);

        ///gets

        const char* getNombre();
        const char* getApellido();
        int         getCuil();
        int         getCuit();
        const char* getDomicilio();
        const char* getLocalidad();
        int         getTelefono();
        const char* getEmail();
		//int _getFechaDia();
        //int _getFechaMes();
        //int _getFechaAnio();


};

#endif // CLIENTEOK_H
