#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef EMPLEADONEGOCIO_H
#define EMPLEADONEGOCIO_H

#include"Empleado.h"


class  EmpleadoNegocio
{
	private:

	public:

	bool guardarDatos(Empleado);
	Empleado* ExtraerDatos();
	int CantidadDeSupplier();

	void cargarCadena(char *pal, int tam);
};


#endif // EMPLEADONEGOCIO_H
