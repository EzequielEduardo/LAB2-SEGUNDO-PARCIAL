#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Vendedor.h"


using namespace std;

///constructor
Vendedor::Vendedor(){}

///sets
        void Vendedor::setTurno(const char *cadena){strcpy(turno,cadena);}

        void Vendedor::setSueldo(int n){sueldo=n;}

        void Vendedor::cargarTodo(){
            char cadena[7];
            int n;

            cargar();
            cout<<"TURNO: "<<endl;
            scanf("%s", cadena);
            setTurno(cadena);
            cout<<"SUELDO: "<<endl;
            cin>>n;
            setSueldo(n);

        };

///gets
        const char* Vendedor::getTurno(){return turno;}

        int Vendedor::getSueldo(){return sueldo;}

        void Vendedor::MostrarTodo(){

            mostrar();

            cout<<"TURNO: ";
            getTurno();
            cout<<endl;

            cout<<"SUELDO: ";
            getSueldo();
            cout<<endl;

        }



///leer de disco
bool Vendedor::leerDeDisco(int pos){
    FILE *p;
    p=fopen("vendedor.dat","rb");
    if(p==NULL) return false;
    fseek(p, pos*sizeof *this, 0);
    bool leyo=fread(this, sizeof *this, 1, p);
    fclose(p);
    return leyo;
}

///grabar en disco
bool Vendedor::grabarEnDisco(){
    FILE *p;
    p=fopen("vendedor.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(this, sizeof *this, 1, p);
    fclose(p);
    return escribio;
}


///destructor
Vendedor::~Vendedor(){}

