#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Persona.h"


using namespace std;

        ///sets
        void Persona::setNombre(const char* cadena){strcpy(nombre,cadena);}
        void Persona::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Persona::setCuil(int n){cuil=n;}
        void Persona::setCuit(int n){cuit=n;}
        void Persona::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Persona::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Persona::setTelefono(int n){telefono=n;}
        void Persona::setEmail(const char* cadena){strcpy(email,cadena);}

        void Persona::cargar(){
            char cadena[50];
            int num;
            cout<<"--INGRESAR DATOS--"<<endl<<endl;

            cout<<"NOMBRE: ";
            scanf("%s", cadena);
            setNombre(cadena);

            cout<<"APELLIDO: ";
            scanf("%s", cadena);
            setApellido(cadena);

            cout<<"CUIL: ";
            cin>>num;
            setCuil(num);
            cout<<endl;

            cout<<"CUIT:";
            cin>>num;
            setCuit(num);
            cout<<endl;

            cout<<"DOMICILIO: ";
            scanf("%s", cadena);
            setDomicilio(cadena);

            cout<<"LOCALIDAD: ";
            scanf("%s", cadena);
            setLocalidad(cadena);

            cout<<"TELEFONO: ";
            cin>>num;
            setTelefono(num);
            cout<<endl;

            cout<<"EMAIL: ";
            scanf("%s", cadena);
            setEmail(cadena);
         }


        ///gets

        const char* Persona::getNombre(){return nombre;}
        const char* Persona::getApellido(){return apellido;}
        int         Persona::getCuil(){return cuil;}
        int         Persona::getCuit(){return cuit;}
        const char* Persona::getDomicilio(){return domicilio;}
        const char* Persona::getLocalidad(){return localidad;}
        int         Persona::getTelefono(){return telefono;}
        const char* Persona::getEmail(){return email;}


void Persona::mostrar(){

            cout<<"NOMBRE: ";
            getNombre();
            cout<<endl;

            cout<<"APELLIDO: ";
            getApellido();
            cout<<endl;

            cout<<"CUIL: ";
            getCuil();
            cout<<endl;

            cout<<"CUIT:";
            getCuit();
            cout<<endl;

            cout<<"DOMICILIO: ";
            getDomicilio();
            cout<<endl;

            cout<<"LOCALIDAD: ";
            getLocalidad();
            cout<<endl;

            cout<<"TELEFONO: ";
            getTelefono();
            cout<<endl;

            cout<<"EMAIL: ";
            getEmail();
            cout<<endl;
         }


Persona::Persona()
{

}

Persona::~Persona()
{

}
