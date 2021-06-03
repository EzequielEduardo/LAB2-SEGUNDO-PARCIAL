#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Cliente.h"


using namespace std;

///constructor
Cliente::Cliente(){}

 ///sets
        void Cliente::setCondicionFiscal(const char* cadena){scanf("%s", cadena);}

        void Cliente::cargarTodo(){
            char cadena[50];
            cargar();
            cout<<"CONDICION FISCAL"<<endl;
            scanf("%s", cadena);
            setCondicionFiscal(cadena);

        }


///gets
        const char* Cliente::getCondicionFiscal(){return condicionFiscal;}

        void Cliente::mostrarTodo(){
            mostrar();

            cout<<"CONDICION FISCAL: ";
            getCondicionFiscal();
            cout<<endl;
        }

///leer de disco
bool Cliente::leerDeDisco(int pos){
    FILE *p;
    p=fopen("cliente.dat","rb");
    if(p==NULL) return false;
    fseek(p, pos*sizeof *this, 0);
    bool leyo=fread(this, sizeof *this, 1, p);
    fclose(p);
    return leyo;
}

///grabar en disco
bool Cliente::grabarEnDisco(){
    FILE *p;
    p=fopen("cliente.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return escribio;
}


///destructor
Cliente::~Cliente(){}

