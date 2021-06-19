#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include "Fecha.h"
#include "Clienteok.h"
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "ClienteVista.h"


using namespace std;

int main()
{
setlocale(LC_ALL,"Spanish");
system("color 02");

ClienteVista cliente;
ClienteNegocio IDcliente;


cliente.cargarCliente();
//cliente.mostrarCliente(IDcliente);


system("pause");
return 0;

}
