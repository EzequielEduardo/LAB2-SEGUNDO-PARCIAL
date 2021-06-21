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


void ClienteVista::menuClientes()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU CLIENTES"<<endl<<endl;
        cout<<"1-CARGAR CLIENTES"<<endl;
        cout<<"2-LISTAR CLIENTES"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarCliente()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            mostrarClientes();
            system("pause");
            system("cls");
            break;

        case 0:

		break;

        default:
            break;

        }

    }
    while(opc!=0);


}


bool ClienteVista::cargarCliente()
{
    ClienteNegocio negocio;
    Cliente_Datos datos;
    cargar_Datos_de_Cliente(datos);
    return negocio.guardarDatos(datos);

}

void ClienteVista::mostrarClientes()
{
    ClienteNegocio negocio;
    Cliente_Datos *vectorClientes;
    vectorClientes= new Cliente_Datos[negocio.CantidadDeClientes()];
    if(vectorClientes==NULL) cout<<"No hay memoria"<<endl;

    if(negocio.ExtraerDatos(vectorClientes)==true)   listarPorPantalla(vectorClientes,negocio);
    else cout<<"ERROR"<<endl;

    delete vectorClientes;
}

void ClienteVista::cargar_Datos_de_Cliente(Cliente_Datos &datos)
{
    char cadena[50];
    int numero;
    ClienteNegocio obj;
    cout << "Datos del Cliente:" << endl;
    cout<<"Ingresar: "<<endl;
    cout<< "Nombre: ";

	obj.cargarCadena(cadena,50);
	datos.setNombre(cadena);

    cout<< "Apellido: ";
	obj.cargarCadena(cadena,50);
	datos.setApellido(cadena);

    cout<< "CUIL: ";
    cin>>numero;
    datos.setCuil(numero);

    cout<< "Domicilio: ";

	obj.cargarCadena(cadena,50);
	datos.setDomicilio(cadena);

    cout<< "Localidad: ";
	obj.cargarCadena(cadena,50);
	datos.setLocalidad(cadena);

    cout<< "Telefono: ";
    cin>>numero;
    datos.setTelefono(numero);

    cout<< "E-mail: ";
	obj.cargarCadena(cadena,50);
	datos.setEmail(cadena);
}


void ClienteVista::listarPorPantalla(Cliente_Datos* vectorClientes,ClienteNegocio negocio)
{

    for(int x=0; x<negocio.CantidadDeClientes(); x++)
    {

        cout<< "Nombre: "<<vectorClientes[x].getNombre() <<endl;
        cout<< "Apellido: "<<vectorClientes[x].getApellido() <<endl;
        cout<< "CUIL: "<<vectorClientes[x].getCuil() <<endl;
        cout<< "Domicilio: "<<vectorClientes[x].getDomicilio() <<endl;
        cout<< "Localidad: "<<vectorClientes[x].getLocalidad() <<endl;
        cout<< "Telefono: "<<vectorClientes[x].getTelefono() <<endl;
        cout<< "E-mail: "<<vectorClientes[x].getEmail() <<endl;
        cout<< "-------------------------"<<endl;
    }
}
