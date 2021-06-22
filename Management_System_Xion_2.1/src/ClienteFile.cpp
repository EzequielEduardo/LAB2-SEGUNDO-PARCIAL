#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "Cliente.h"

using namespace std;

    bool ClienteFile::grabarEnDisco(Cliente cliente){

        FILE *p;
        p=fopen("Cliente.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&cliente, sizeof (Cliente), 1, p);
        fclose(p);
        return escribio;
    }


bool ClienteFile::extraerDatosDeDisco(Cliente &cliente, int pos){

        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof (Cliente), 0);
        bool leyo=fread(&cliente, sizeof (Cliente), 1, p);
        fclose(p);
        return leyo;
    }

    int ClienteFile::cantidadDeDatosGrabados(){

        Cliente cliente;
        int cantidad=0;

        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;

        while(fread(&cliente, sizeof (Cliente), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }

