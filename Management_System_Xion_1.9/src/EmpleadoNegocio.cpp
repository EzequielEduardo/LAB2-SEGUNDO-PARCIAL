#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "Empleado.h"
#include "EmpleadoFile.h"
#include "EmpleadoNegocio.h"
#include "EmpleadoVista.h"

using namespace std;

bool EmpleadoNegocio::guardarDatos(Empleado supplier)
{

    EmpleadoFile archivo;
    return archivo.grabarEnDisco(supplier);

}

bool EmpleadoNegocio::ExtraerDatos(Empleado* vectorEmpleados)
{

    EmpleadoFile archivo;
    int x=0;
    int cont=0;
    for(x; x<CantidadDeSupplier(); x++)
    {
        if(archivo.extraerDatosDeDisco(vectorEmpleados[x],x)==true)cont++;

    }
if(cont==x)return true; else return false;
}

int EmpleadoNegocio::CantidadDeSupplier()
{

    EmpleadoFile archivo;

    return archivo.cantidadDeDatosGrabados();

}

		void EmpleadoNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}
