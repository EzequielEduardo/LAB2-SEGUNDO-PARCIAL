#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include"Proveedor.h"
#include"Persona.h"

class Proveedor:public Persona
{
		private:

		char condicionFiscal[50];
		char condicionDePago[50];

	public:

		///sets
        void setCondicionFiscal(const char *cadena);
		void setCondicionDePago(const char *cadena);
        ///gets

        const char* getCondicionFiscal();
		const char* getCondicionDePago();
};


#endif // PROVEEDOR_H
