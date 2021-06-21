#include<iostream>
#include<clocale>
#include<cstdlib>
#include <cstdio>
#include<cstring>
using namespace std;
#include "Proveedor.h"

        ///sets

        void Proveedor::setNombre(const char *cadena){strcpy(nombre,cadena);  	}
        void Proveedor::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Proveedor::setCuil(int n){cuil=n;}
        void Proveedor::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Proveedor::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Proveedor::setTelefono(int n){telefono=n;}
        void Proveedor::setEmail(const char* cadena){strcpy(email,cadena);}

        void Proveedor::setCondicionFiscal(const char *cadena){strcpy(condicionFiscal,cadena); }
        void Proveedor::setCondicionDePago(const char *cadena){strcpy(condicionDePago,cadena); }

        ///gets

        const char* Proveedor::getNombre(){return nombre;}
        const char* Proveedor::getApellido(){return apellido;}
        int         Proveedor::getCuil(){return cuil;}
        const char* Proveedor::getDomicilio(){return domicilio;}
        const char* Proveedor::getLocalidad(){return localidad;}
        int         Proveedor::getTelefono(){return telefono;}
        const char* Proveedor::getEmail(){return email;}
		const char* Proveedor::getCondicionFiscal(){return condicionFiscal;}
		const char* Proveedor::getCondicionDePago(){return condicionDePago;}
