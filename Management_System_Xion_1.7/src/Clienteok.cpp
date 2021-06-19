#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
#include "Clienteok.h"
#include<cstring>


        ///sets

        void Clienteok::setNombre(const char* cadena){strcpy(nombre,cadena);}
        void Clienteok::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Clienteok::setCuil(int n){cuil=n;}
        void Clienteok::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Clienteok::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Clienteok::setTelefono(int n){telefono=n;}
        void Clienteok::setEmail(const char* cadena){strcpy(email,cadena);}
       // void Clienteok::setfechaNac(int d,int m, int a){fechaNac.setDia(d);fechaNac.setMes(m);fechaNac.setAnio(a);}

        ///gets

        const char* Clienteok::getNombre(){return nombre;}
        const char* Clienteok::getApellido(){return apellido;}
        int         Clienteok::getCuil(){return cuil;}
        const char* Clienteok::getDomicilio(){return domicilio;}
        const char* Clienteok::getLocalidad(){return localidad;}
        int         Clienteok::getTelefono(){return telefono;}
        const char* Clienteok::getEmail(){return email;}
		//int Clienteok::_getFechaDia(){return fechaNac.getDia();}
		//int Clienteok::_getFechaMes(){return fechaNac.getMes();}
        //int Clienteok::_getFechaAnio(){return fechaNac.getAnio();}
