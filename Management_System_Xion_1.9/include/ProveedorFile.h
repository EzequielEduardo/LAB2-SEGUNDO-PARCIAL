#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDORFILE_H
#define PROVEEDORFILE_H


class ProveedorFile
{
	private:
		//FILE *pfile;

	public:

		bool grabarEnDisco(Proveedor );
        bool extraerDatosDeDisco(Proveedor &,int);
        int  cantidadDeDatosGrabados();

};


#endif // PROVEEDORFILE_H
