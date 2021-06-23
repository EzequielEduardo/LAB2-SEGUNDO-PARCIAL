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

    char cadena[50];
    int numero;

    cout << "Datos del Empleado:" << endl;
    cout<<"Ingresar: "<<endl;
    cout<< "Nombre: ";

	negocio.cargarCadena(cadena,50);
	datos.setNombre(cadena);

    cout<< "Apellido: ";
	negocio.cargarCadena(cadena,50);
	datos.setApellido(cadena);

    cout<< "CUIL: ";
    cin>>numero;
    datos.setCuil(numero);

    cout<< "Domicilio: ";
	negocio.cargarCadena(cadena,50);
	datos.setDomicilio(cadena);

    cout<< "Localidad: ";
	negocio.cargarCadena(cadena,50);
	datos.setLocalidad(cadena);

    cout<< "Telefono: ";
    cin>>numero;
    datos.setTelefono(numero);

    cout<< "E-mail: ";
	negocio.cargarCadena(cadena,50);
	datos.setEmail(cadena);

    return negocio.guardarDatos(datos);

}

void EmpleadoVista::mostrarEmpleados()
{
    EmpleadoNegocio negocio;
    Empleado *vectorEmpleados;

    vectorEmpleados=negocio.ExtraerDatos();

        for(int x;x<negocio.CantidadDeSupplier();x++){
        cout<< "Nombre: "<<vectorEmpleados[x].getNombre() <<endl;
        cout<< "Apellido: "<<vectorEmpleados[x].getApellido() <<endl;
        cout<< "CUIL: "<<vectorEmpleados[x].getCuil() <<endl;
        cout<< "Domicilio: "<<vectorEmpleados[x].getDomicilio() <<endl;
        cout<< "Localidad: "<<vectorEmpleados[x].getLocalidad() <<endl;
        cout<< "Telefono: "<<vectorEmpleados[x].getTelefono() <<endl;
        cout<< "E-mail: "<<vectorEmpleados[x].getEmail() <<endl;
        cout<< "-------------------------"<<endl;}

    delete vectorEmpleados;
}
