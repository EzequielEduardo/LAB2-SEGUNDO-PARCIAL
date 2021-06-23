#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"

class Cliente:public Persona
{
		private:

		char condicionFiscal[50];
		char condicionDeCobro[50];



	public:

        ///sets

		void settersPersona();

        void setCondicionFiscal(const char*);
        void setCondicionDeCobro(const char*);

        ///gets
		//void gettersPersona();
        const char* getCondicionFiscal();
		const char* getCondicionDeCobro();


};

#endif // CLIENTEOK_H
