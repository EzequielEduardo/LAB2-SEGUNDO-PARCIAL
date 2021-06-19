#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEFILE_H
#define CLIENTEFILE_H
#include "ClienteNegocio.h"

class ClienteFile
{
	private:
		FILE *pfile;


	public:
		//static ClienteNegocio x;
		bool grabarEnDisco_Cliente(Clienteok*);
		bool leerDeDisco_Cliente(Clienteok &reg, int pos);


};


#endif // CLIENTEFILE_H
