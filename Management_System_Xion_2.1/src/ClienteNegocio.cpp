#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "Cliente.h"
#include "ClienteFile.h"
#include "ClienteNegocio.h"
#include "ClienteVista.h"

using namespace std;


bool ClienteNegocio::guardarDatos(Cliente cliente)
{

    ClienteFile archivo;
    return archivo.grabarEnDisco(cliente);

}

bool ClienteNegocio::ExtraerDatos(Cliente* vectorClientes)
{

    ClienteFile archivo;
    int x=0;
    int cont=0;
    for(x; x<CantidadDeClientes(); x++)
    {
        if(archivo.extraerDatosDeDisco(vectorClientes[x],x)==true)cont++;

    }
if(cont==x)return true; else return false;
}

int ClienteNegocio::CantidadDeClientes()
{

    ClienteFile archivo;

    return archivo.cantidadDeDatosGrabados();

}

		void ClienteNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}
