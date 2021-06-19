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

	if(strlen(cliente.getNombre())<10 )
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

