#ifndef EMPLEADOFILE_H
#define EMPLEADOFILE_H
#include "EmpleadoNegocio.h"
#include <cstdio>

class EmpleadoFile
{
	private:
		FILE *pfile;

	public:
		//static EmpleadoNegocio x;
		bool grabarEnDisco_Empleado(EmpleadoNegocio*);
		//bool leerDeDisco_Empleado(Empleado_Proveedor_Propiedades &Empleado,int pos);

};
#endif // EMPLEADOFILE_H
