#ifndef EMPLEADONEGOCIO_H
#define EMPLEADONEGOCIO_H

class  EmpleadoNegocio
{
	private:

	int _IdEmpleado;

	public:

	void SetIdEmpleado(const int IdEmpleado){ _IdEmpleado = IdEmpleado;}
	int  GetIdEmpleado(){return _IdEmpleado;}
	bool ValidacionEmpleado ();


};


#endif // EMPLEADONEGOCIO_H
