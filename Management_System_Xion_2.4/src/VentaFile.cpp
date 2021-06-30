#include<iostream>
#include<clocale>
#include<cstdlib>

#include "VentaFile.h"
#include "Datos_CompraVenta.h"
#include "VentaNegocio.h"

using namespace std;

  bool VentaFile::grabarEnDisco(Articulo articulo){

        FILE *p;
        p=fopen("Ventas.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&articulo, sizeof (Articulo), 1, p);
        fclose(p);
        return escribio;
    }

