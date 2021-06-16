#include<iostream>
#include<clocale>
#include<cstdlib>

#include "EmpleadoFile.h"
#include "EmpleadoNegocio.h"
#include "EmpleadoVista.h"


using namespace std;


bool EmpleadoNegocio::ValidacionEmpleado ()
{
	if(_IdEmpleado<=0)
	{
		cout<<"Ingrese un Id de Empleado valido. "<<endl;
		return false;
	}

EmpleadoFile a;
	if(a.grabarEnDisco_Empleado(this))return true;
}
