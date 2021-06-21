#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "Clienteok.h"

using namespace std;

    bool ClienteFile::grabarEnDisco(Cliente_Datos cliente){

        FILE *p;
        p=fopen("Cliente.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&cliente, sizeof (Cliente_Datos), 1, p);
        fclose(p);
        return escribio;
    }


bool ClienteFile::extraerDatosDeDisco(Cliente_Datos &cliente, int pos){

        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof (Cliente_Datos), 0);
        bool leyo=fread(&cliente, sizeof (Cliente_Datos), 1, p);
        fclose(p);
        return leyo;
    }

    int ClienteFile::cantidadDeDatosGrabados(){

        Cliente_Datos cliente;
        int cantidad=0;

        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;

        while(fread(&cliente, sizeof (Cliente_Datos), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }

