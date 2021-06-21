#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

using namespace std;
#include"Empleado.h"
#include"EmpleadoVista.h"
#include"EmpleadoNegocio.h"

void EmpleadoVista::menuEmpleados()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU EMPLEADOS"<<endl<<endl;
        cout<<"1-CARGAR EMPLEADO"<<endl;
        cout<<"2-LISTAR EMPLEADO"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarEmpleados()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

            system("pause");
            system("cls");
            break;

        case 2:
            mostrarEmpleados();
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


bool EmpleadoVista::cargarEmpleados()
{
    EmpleadoNegocio negocio;
    Empleado datos;
    cargar_Datos_de_Empleados(datos);
    return negocio.guardarDatos(datos);

}

void EmpleadoVista::mostrarEmpleados()
{
    EmpleadoNegocio negocio;
    Empleado *vectorEmpleados;
    vectorEmpleados= new Empleado[negocio.CantidadDeSupplier()];
    if(vectorEmpleados==NULL) cout<<"No hay memoria"<<endl;

    if(negocio.ExtraerDatos(vectorEmpleados)==true)   listarPorPantalla(vectorEmpleados,negocio);
    else cout<<"ERROR"<<endl;

    delete vectorEmpleados;
}

void EmpleadoVista::cargar_Datos_de_Empleados(Empleado &datos)
{
    char cadena[50];
    int numero;
    EmpleadoNegocio obj;
    cout << "Datos del Empleado:" << endl;
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


void EmpleadoVista::listarPorPantalla(Empleado* vectorProvedores,EmpleadoNegocio negocio)
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
