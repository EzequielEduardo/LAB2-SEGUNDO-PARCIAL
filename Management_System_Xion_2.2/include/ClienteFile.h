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
        Cliente* extraerDatosDeDisco();
        int  cantidadDeDatosGrabados();

};


#endif // CLIENTEFILE_H
