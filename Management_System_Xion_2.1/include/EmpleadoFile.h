#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef EMPLEADOFILE_H
#define EMPLEADOFILE_H


class EmpleadoFile
{
	private:
		//FILE *pfile;

	public:

		bool grabarEnDisco(Empleado );
        bool extraerDatosDeDisco(Empleado &,int);
        int  cantidadDeDatosGrabados();

};


#endif // EMPLEADOFILE_H
