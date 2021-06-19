#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include "Cliente.h"

using namespace std;

        ///sets

        void Cliente::setNombre(const char* cadena){strcpy(nombre,cadena);}
        void Cliente::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Cliente::setCuil(int n){cuil=n;}
        void Cliente::setCuit(int n){cuit=n;}
        void Cliente::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Cliente::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Cliente::setTelefono(int n){telefono=n;}
        void Cliente::setEmail(const char* cadena){strcpy(email,cadena);}
        void Cliente::setfechaNac(int d,int m, int a){fechaNac.setDia(d);fechaNac.setMes(m);fechaNac.setAnio(a);}

        ///gets

        const char* Cliente::getNombre(){return nombre;}
        const char* Cliente::getApellido(){return apellido;}
        int         Cliente::getCuil(){return cuil;}
        int         Cliente::getCuit(){return cuit;}
        const char* Cliente::getDomicilio(){return domicilio;}
        const char* Cliente::getLocalidad(){return localidad;}
        int         Cliente::getTelefono(){return telefono;}
        const char* Cliente::getEmail(){return email;}
		int Cliente::_getFechaDia(){return fechaNac.getDia();}
		int Cliente::_getFechaMes(){return fechaNac.getMes();}
        int Cliente::_getFechaAnio(){return fechaNac.getAnio();}
