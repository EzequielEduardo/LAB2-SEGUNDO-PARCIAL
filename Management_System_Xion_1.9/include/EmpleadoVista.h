#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef EMPLEADOVISTA_H
#define EMPLEADOVISTA_H


#include"Empleado.h"
#include"EmpleadoNegocio.h"

class EmpleadoVista
{

	private:


	public:


    void menuEmpleados();
	bool cargarEmpleados();
	void cargar_Datos_de_Empleados(Empleado&);
	void mostrarEmpleados();
	void listarPorPantalla(Empleado*,EmpleadoNegocio);

};

#endif // EMPLEADOVISTA_H
