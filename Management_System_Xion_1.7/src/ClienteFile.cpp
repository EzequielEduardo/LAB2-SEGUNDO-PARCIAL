#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "Cliente.h"

using namespace std;

    bool ClienteFile::grabarEnDisco_Cliente(Clienteok *x){
        FILE *p;
        p=fopen("Cliente.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(x, sizeof (Clienteok), 1, p);
        fclose(p);
        return escribio;
    }


    bool leerDeDisco_Cliente(Clienteok Cliente,int pos){
        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Cliente, 0);
        bool leyo=fread(&Cliente, sizeof Cliente, 1, p);
        fclose(p);
        return leyo;
    }


