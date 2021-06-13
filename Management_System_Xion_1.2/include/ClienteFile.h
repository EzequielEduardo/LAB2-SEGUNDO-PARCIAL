#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEFILE_H
#define CLIENTEFILE_H


class ClienteFile
{
	private:
		FILE *pfile;

	public:
	bool grabarEnDisco_Cliente(int IDCliente);
   //bool leerDeDisco_Cliente(Cliente_Proveedor_Propiedades &Cliente,int pos);

};

#endif // CLIENTEFILE_H
