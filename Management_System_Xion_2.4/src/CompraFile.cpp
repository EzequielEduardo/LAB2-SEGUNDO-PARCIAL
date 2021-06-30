#include<iostream>
#include<clocale>
#include<cstdlib>

#include "CompraFile.h"
#include "Datos_CompraVenta.h"
#include "CompraNegocio.h"

using namespace std;

  bool CompraFile::grabarEnDisco(Articulo articulo){

        FILE *p;
        p=fopen("Compras.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&articulo, sizeof (Articulo), 1, p);
        fclose(p);
        return escribio;
    }

