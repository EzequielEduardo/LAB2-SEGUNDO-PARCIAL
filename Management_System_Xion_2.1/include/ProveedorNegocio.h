#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDORNEGOCIO_H
#define PROVEEDORNEGOCIO_H
#include"Proveedor.h"


class  ProveedorNegocio
{
	private:

	public:

	bool guardarDatos(Proveedor);
	bool ExtraerDatos(Proveedor*);
	int CantidadDeSupplier();

	void cargarCadena(char *pal, int tam);
};


#endif // PROVEEDORNEGOCIO_H
