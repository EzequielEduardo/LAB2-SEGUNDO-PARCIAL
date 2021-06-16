#include<iostream>
#include<clocale>
#include<cstdlib>
#include "ClienteNegocio.h"
#include "ClienteFile.h"
#include "ClienteVista.h"

#include "EmpleadoNegocio.h"
#include "EmpleadoFile.h"
#include "EmpleadoVista.h"
using namespace std;






int main()

{
setlocale(LC_ALL,"Spanish");
system("color 02");

ClienteVista cliente;
ClienteNegocio IDcliente;
EmpleadoVista empleado;
EmpleadoNegocio IDempleado;

cliente.cargarCliente(ClienteNegocio cliente);
cliente.MostrarCliente();


empleado.cargarEmpleado(EmpleadoNegocio IDempleado);
empleado.MostrarEmpleado();
empleado.ModificarEmpleado();
empleado.BajaLogicaEmpleado();



system("pause");
return 0;

}
