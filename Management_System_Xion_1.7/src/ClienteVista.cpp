#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
using namespace std;
#include "Clienteok.h"
#include "ClienteVista.h"
#include "ClienteNegocio.h"


void ClienteVista::cargarCliente()
{
    Clienteok obj;

	cargarTodoCliente(obj);

	ClienteNegocio neg1;

	while(neg1.ValidacionCliente(obj)==false)
	{cout<<"ERROR DE CARGA. CARGAR NUEVAMENTE"<<endl;
	system("pause");

	cargarTodoCliente(obj);

	};

	cout<<"Carga OK"<<endl;
}

	void ClienteVista::cargarTodoCliente(Clienteok &obj) {

	char n[50];
	int cuil;
	cout << "Datos del Cliente:" << endl;
	cout<< "Ingrese el Nombre Cliente: " <<endl;
	scanf("%s",n);
	obj.setNombre(n);

	cout<< "Ingrese el Apellido Cliente: " <<endl;
	scanf("%s",n);
	obj.setApellido(n);

	cout<< "Ingrese el CUIL Cliente: " <<endl;
	cin>>cuil;
	obj.setCuil(cuil);

	cout<< "Ingrese el domicilio de Cliente: " <<endl;
	scanf("%s",n);
	obj.setDomicilio(n);

	cout<< "Ingrese el Localidad de Cliente: " <<endl;
	scanf("%s",n);
	obj.setLocalidad(n);

	cout<< "Ingrese el Telefono Cliente: " <<endl;
	cin>>cuil;
	obj.setTelefono(cuil);

	cout<< "Ingrese el E-mail de Cliente: " <<endl;
	scanf("%s",n);
	obj.setEmail(n);


	}




void ClienteVista::mostrarCliente()
	{
		ClienteNegocio pp;
		int pos=0;

		Clienteok objok;

		//Clienteok obj2;  //& direccion de memoria
		//*objok=obj2;  // * contenido de la direccion de memoria

		while(pp.listardeArchivo(objok, pos)==true){

			mostrarCliente();
			pos++;

		}

		if(pos==0) cout<<"No se encontraron datos en el file"<<endl;




	}

