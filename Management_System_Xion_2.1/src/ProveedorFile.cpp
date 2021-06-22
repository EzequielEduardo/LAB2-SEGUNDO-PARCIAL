#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ProveedorNegocio.h"
#include "ProveedorFile.h"
#include "Proveedor.h"

using namespace std;

    bool ProveedorFile::grabarEnDisco(Proveedor Proveedor){

        FILE *p;
        p=fopen("Proveedor.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Proveedor, sizeof (Proveedor), 1, p);
        fclose(p);
        return escribio;
    }


bool ProveedorFile::extraerDatosDeDisco(Proveedor &Proveedor, int pos){

        FILE *p;
        p=fopen("Proveedor.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof (Proveedor), 0);
        bool leyo=fread(&Proveedor, sizeof (Proveedor), 1, p);
        fclose(p);
        return leyo;
    }

    int ProveedorFile::cantidadDeDatosGrabados(){

        Proveedor Proveedor;
        int cantidad=0;

        FILE *p;
        p=fopen("Proveedor.dat","rb");
        if(p==NULL) return false;

        while(fread(&Proveedor, sizeof (Proveedor), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }
