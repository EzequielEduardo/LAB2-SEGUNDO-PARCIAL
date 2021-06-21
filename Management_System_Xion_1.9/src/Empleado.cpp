#include<iostream>
#include<clocale>
#include<cstdlib>
#include <cstdio>
#include<cstring>
using namespace std;
#include "Empleado.h"

        ///sets

        void Empleado::setNombre(const char *cadena){strcpy(nombre,cadena);  	}
        void Empleado::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Empleado::setCuil(int n){cuil=n;}
        void Empleado::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Empleado::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Empleado::setTelefono(int n){telefono=n;}
        void Empleado::setEmail(const char* cadena){strcpy(email,cadena);}

        void Empleado::setTurno(const char *cadena){strcpy(turno,cadena); }
        void Empleado::setSueldo(float s){sueldo=s;}

        ///gets

        const char* Empleado::getNombre(){return nombre;}
        const char* Empleado::getApellido(){return apellido;}
        int         Empleado::getCuil(){return cuil;}
        const char* Empleado::getDomicilio(){return domicilio;}
        const char* Empleado::getLocalidad(){return localidad;}
        int         Empleado::getTelefono(){return telefono;}
        const char* Empleado::getEmail(){return email;}
		const char* Empleado::getTurno(){return turno;}
		const float Empleado::getSueldo(){return sueldo;}
