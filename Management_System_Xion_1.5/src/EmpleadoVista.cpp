#include<iostream>
#include<clocale>
#include<cstdlib>


#include "EmpleadoVista.h"
#include "EmpleadoNegocio.h"

using namespace std;

void EmpleadoVista::cargarEmpleado()
{
    EmpleadoNegocio ID;
	int id;
	cout << "Datos del Empleado:" << endl;
	cout<< "Ingrese el Id del Empleado: " <<endl;
	cin>>id;

    ID.SetIdEmpleado(id);

	while(ID.ValidacionEmpleado()!=true)
	{
	cout << "Datos del Empleado:" << endl;
	cout<< "Ingrese el Id del Empleado: " <<endl;
	cin>>id;

	}

	cout<<"Carga OK"<<endl;

}
