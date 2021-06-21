#include<iostream>
#include<clocale>
#include<cstdlib>
#include <cstdio>
#include<cstring>
using namespace std;
#include "Clienteok.h"



        ///sets

        void Cliente_Datos::setNombre(const char *cadena){strcpy(nombre,cadena);  }
        void Cliente_Datos::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Cliente_Datos::setCuil(int n){cuil=n;}
        void Cliente_Datos::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Cliente_Datos::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Cliente_Datos::setTelefono(int n){telefono=n;}
        void Cliente_Datos::setEmail(const char* cadena){strcpy(email,cadena);}


        ///gets

        const char* Cliente_Datos::getNombre(){return nombre;}
        const char* Cliente_Datos::getApellido(){return apellido;}
        int         Cliente_Datos::getCuil(){return cuil;}
        const char* Cliente_Datos::getDomicilio(){return domicilio;}
        const char* Cliente_Datos::getLocalidad(){return localidad;}
        int         Cliente_Datos::getTelefono(){return telefono;}
        const char* Cliente_Datos::getEmail(){return email;}

