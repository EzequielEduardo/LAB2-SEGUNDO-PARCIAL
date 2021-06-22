#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEFILE_H
#define CLIENTEFILE_H
#include "ClienteNegocio.h"

class ClienteFile
{
	private:
		//FILE *pfile;

	public:

		bool grabarEnDisco(Cliente );
        bool extraerDatosDeDisco(Cliente &,int);
        int  cantidadDeDatosGrabados();

};


#endif // CLIENTEFILE_H
