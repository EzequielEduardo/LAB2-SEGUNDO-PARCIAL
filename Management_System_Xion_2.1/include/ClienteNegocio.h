#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTENEGOCIO_H
#define CLIENTENEGOCIO_H
#include "Cliente.h"

class  ClienteNegocio
{
	private:

	public:

	bool guardarDatos(Cliente);
	bool ExtraerDatos(Cliente*);
	int CantidadDeClientes();

	void cargarCadena(char *pal, int tam);
};



#endif // CLIENTENEGOCIO_H
