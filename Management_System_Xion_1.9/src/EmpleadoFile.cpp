#include<clocale>
#include<cstdlib>
#include "EmpleadoNegocio.h"
#include "EmpleadoFile.h"
#include "Empleado.h"

using namespace std;

    bool EmpleadoFile::grabarEnDisco(Empleado Empleado){

        FILE *p;
        p=fopen("Empleado.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Empleado, sizeof (Empleado), 1, p);
        fclose(p);
        return escribio;
    }


bool EmpleadoFile::extraerDatosDeDisco(Empleado &Empleado, int pos){

        FILE *p;
        p=fopen("Empleado.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof (Empleado), 0);
        bool leyo=fread(&Empleado, sizeof (Empleado), 1, p);
        fclose(p);
        return leyo;
    }

    int EmpleadoFile::cantidadDeDatosGrabados(){

        Empleado Empleado;
        int cantidad=0;

        FILE *p;
        p=fopen("Empleado.dat","rb");
        if(p==NULL) return false;

        while(fread(&Empleado, sizeof (Empleado), 1, p)==true)cantidad++;


        fclose(p);
        return cantidad;
    }
