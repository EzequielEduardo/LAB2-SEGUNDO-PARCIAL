#include<iostream>
#include<clocale>
#include<cstdlib>

#include "EmpleadoNegocio.h"
#include "EmpleadoFile.h"

using namespace std;
/*
 bool grabarEnDisco_Empleado(EmpleadoNegocio& x){
        FILE *p;
        p=fopen("Empleado.dat","ab+");
        if(p==NULL) return false;
        bool escribio=fwrite(&x, sizeof (EmpleadoNegocio), 1, p);
        fclose(p);
        return escribio;
    }

*/

    bool EmpleadoFile::grabarEnDisco_Empleado(EmpleadoNegocio* x){
        FILE *p;
        p=fopen("Empleado.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(x, sizeof (EmpleadoNegocio), 1, p);
        fclose(p);
        return escribio;
    }

/*

    bool leerDeDisco_Empleado(Cliente_Proveedor_Propiedades &Empleado,int pos){
        FILE *p;
        p=fopen("Empleado.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Empleado, 0);
        bool leyo=fread(&Empleado, sizeof Empleado, 1, p);
        fclose(p);
        return leyo;
    }

*/
