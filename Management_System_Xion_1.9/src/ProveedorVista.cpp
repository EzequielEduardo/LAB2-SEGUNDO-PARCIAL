#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

using namespace std;
#include"Proveedor.h"
#include"ProveedorVista.h"
#include"ProveedorNegocio.h"

void ProveedorVista::menuProveedores()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU PROVEEDORES"<<endl<<endl;
        cout<<"1-CARGAR PROVEEDOR"<<endl;
        cout<<"2-LISTAR PROVEEDOR"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarProveedores()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            mostrarProveedores();
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


bool ProveedorVista::cargarProveedores()
{
    ProveedorNegocio negocio;
    Proveedor datos;
    cargar_Datos_de_Proveedores(datos);
    return negocio.guardarDatos(datos);

}

void ProveedorVista::mostrarProveedores()
{
    ProveedorNegocio negocio;
    Proveedor *vectorProveedores;
    vectorProveedores= new Proveedor[negocio.CantidadDeSupplier()];
    if(vectorProveedores==NULL) cout<<"No hay memoria"<<endl;

    if(negocio.ExtraerDatos(vectorProveedores)==true)   listarPorPantalla(vectorProveedores,negocio);
    else cout<<"ERROR"<<endl;

    delete vectorProveedores;
}

void ProveedorVista::cargar_Datos_de_Proveedores(Proveedor &datos)
{
    char cadena[50];
    int numero;
    ProveedorNegocio obj;
    cout << "Datos del Proveedor:" << endl;
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


void ProveedorVista::listarPorPantalla(Proveedor* vectorProvedores,ProveedorNegocio negocio)
{

    for(int x=0; x < negocio.CantidadDeSupplier(); x++)
    {

        cout<< "Nombre: "<<vectorProvedores[x].getNombre() <<endl;
        cout<< "Apellido: "<<vectorProvedores[x].getApellido() <<endl;
        cout<< "CUIL: "<<vectorProvedores[x].getCuil() <<endl;
        cout<< "Domicilio: "<<vectorProvedores[x].getDomicilio() <<endl;
        cout<< "Localidad: "<<vectorProvedores[x].getLocalidad() <<endl;
        cout<< "Telefono: "<<vectorProvedores[x].getTelefono() <<endl;
        cout<< "E-mail: "<<vectorProvedores[x].getEmail() <<endl;
        cout<< "-------------------------"<<endl;
    }
}
