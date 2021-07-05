#include<iostream>
#include<clocale>
#include<cstdlib>

#include "CompraFile.h"
#include "TransaxInventario.h"
#include "CompraNegocio.h"

using namespace std;

  bool CompraFile::grabarEnDisco(TransaxInventario articulo){

        FILE *p;
        p=fopen("Compras.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&articulo, sizeof (Articulo), 1, p);
        fclose(p);
        return escribio;
    }

