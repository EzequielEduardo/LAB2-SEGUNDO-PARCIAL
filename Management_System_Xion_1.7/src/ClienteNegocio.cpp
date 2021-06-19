#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "Clienteok.h"
#include "ClienteFile.h"
#include "ClienteNegocio.h"
#include "ClienteVista.h"

using namespace std;


bool ClienteNegocio::ValidacionCliente ( Clienteok cliente )
{

	if(strlen(cliente.getNombre())<50)
	{
		return AgregarEnArchivo( &cliente);
	}
	else {return false;};

}

	bool ClienteNegocio::AgregarEnArchivo( Clienteok *uno )

	{
		ClienteFile obj;


		if(obj.grabarEnDisco_Cliente(uno)==true)
		{
			return true;
		}
		else return false;


	}



    bool leerDeDisco_Cliente(Clienteok &reg,int pos){
        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Clienteok, 0);
        bool leyo=fread(&Clienteok, sizeof Clienteok, 1, p);
        fclose(p);
        return leyo;
    }


	/*bool ClienteNegocio::listardeArchivo(Clienteok &reg, int pos)
	{

		ClienteFile obj ;





		if(obj.leerDeDisco_Cliente(reg, pos)==true) return true;
		else return false;

	}
*/
