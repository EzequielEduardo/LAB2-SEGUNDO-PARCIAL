#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTENEGOCIO_H
#define CLIENTENEGOCIO_H
#include "Clienteok.h"

class  ClienteNegocio
{
	private:

	public:

	bool ValidacionCliente (Clienteok);

	bool AgregarEnArchivo(Clienteok*);

	//bool listardeArchivo(Clienteok &objok, int pos);

	bool leerDeDisco_Cliente(Clienteok &reg,int pos);

};



#endif // CLIENTENEGOCIO_H
