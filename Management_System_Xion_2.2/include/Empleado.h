#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include"Persona.h"

class Empleado:public Persona
{
		private:


		char turno[50];
		float sueldo;

	public:


        ///sets

        void setTurno(const char *cadena);
		void setSueldo(const float);

        ///gets

        const char* getTurno();
		const float getSueldo();
};
#endif // EMPLEADO_H
