#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Proveedor.h"


using namespace std;

///constructor
Proveedor::Proveedor(){}

 ///sets
        void Proveedor::setCondicionFiscal(const char* cadena){scanf("%s", cadena);}

        void Proveedor::cargarTodo(){
            char cadena[50];
            cargar();
            cout<<"CONDICION FISCAL"<<endl;
            scanf("%s", cadena);
            setCondicionFiscal(cadena);

        }


///gets
        const char* Proveedor::getCondicionFiscal(){return condicionFiscal;}

        void Proveedor::mostrarTodo(){
            mostrar();

            cout<<"CONDICION FISCAL: ";
            getCondicionFiscal();
            cout<<endl;
        }

///leer de disco
bool Proveedor::leerDeDisco(int pos){
    FILE *p;
    p=fopen("proveedor.dat","rb");
    if(p==NULL) return false;
    fseek(p, pos*sizeof *this, 0);
    bool leyo=fread(this, sizeof *this, 1, p);
    fclose(p);
    return leyo;
}

///grabar en disco
bool Proveedor::grabarEnDisco(){
    FILE *p;
    p=fopen("proveedor.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return escribio;
}


///destructor
Proveedor::~Proveedor(){}
