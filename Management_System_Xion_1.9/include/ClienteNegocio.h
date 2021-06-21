#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTENEGOCIO_H
#define CLIENTENEGOCIO_H
#include "Clienteok.h"

class  ClienteNegocio
{
	private:

	public:

	bool guardarDatos(Cliente_Datos);
	bool ExtraerDatos(Cliente_Datos*);
	int CantidadDeClientes();

	void cargarCadena(char *pal, int tam);
};



#endif // CLIENTENEGOCIO_H
