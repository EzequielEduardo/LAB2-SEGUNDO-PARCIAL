#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "Datos_CompraVenta.h"
#include "CompraNegocio.h"
#include "CompraFile.h"
using namespace std;

bool CompraNegocio::guardarDatos(Articulo articulo)
{
    CompraFile archivo;
    return archivo.grabarEnDisco(articulo);
}



void CompraNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}
