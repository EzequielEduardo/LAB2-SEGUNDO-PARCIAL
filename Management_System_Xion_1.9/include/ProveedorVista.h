#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDORVISTA_H
#define PROVEEDORVISTA_H
#include"Proveedor.h"
#include"ProveedorNegocio.h"

class ProveedorVista
{

	private:


	public:


    void menuProveedores();
	bool cargarProveedores();
	void cargar_Datos_de_Proveedores(Proveedor&);
	void mostrarProveedores();
	void listarPorPantalla(Proveedor*,ProveedorNegocio);

};


#endif // PROVEEDORVISTA_H
