#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
#include "ClienteNegocio.h"
#include "ClienteVista.h"

bool ClienteNegocio::ValidacionCliente ( int IDcliente )
{
	if(IDcliente<=0)
	{
		cout<<"Ingrese un Id de cliente valido. "<<endl;
		return false;
	}

	//if(grabarEnDisco_Cliente(IDcliente))return true;
}
