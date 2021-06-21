#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEVISTA_H
#define CLIENTEVISTA_H
#include "ClienteNegocio.h"
#include "Clienteok.h"

class ClienteVista
{

	private:


	public:


    void menuClientes();
	bool cargarCliente();
	void cargar_Datos_de_Cliente(Cliente_Datos&);
	void mostrarClientes();
	void listarPorPantalla(Cliente_Datos*,ClienteNegocio);

};

#endif // CLIENTEVISTA_H
