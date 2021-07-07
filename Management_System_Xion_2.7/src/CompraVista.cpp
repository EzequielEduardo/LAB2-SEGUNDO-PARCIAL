#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "Articulo.h"
#include "Transaxinventario.h"
#include "CompraNegocio.h"
#include "CompraVista.h"

using namespace std;

void CompraVista::menuCompras()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU COMPRAS"<<endl<<endl;
        cout<<"1-CARGAR COMPRAS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarCompras()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
            else cout<<"¡¡ERROR, NO SE PUDIERON GUARDAR LOS DATOS!!"<<endl;

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


bool CompraVista::cargarCompras()
{
    CompraNegocio negocio;
    char cadena[20];
    int entero,dia,mes,anio;
    float decimal;
    Fecha f;


    cout<<"Datos de la fecha actual: "<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;

    TransaxInventario datos(dia,mes,anio);

    cout<<"--------------------------------------"<<endl;

    cout << "Datos de la Compra:"<<endl;
    cout<<"Ingresar: "<<endl;

    cout<<"ID_Articulo: ";
        negocio.cargarCadena(cadena,20);
        datos.setTRID_Articulo(cadena);

	cout<<"Fecha de Compra:";
	datos.setFechaTransax(entero);

    cout<<"Categoria:";
        negocio.cargarCadena(cadena,20);
        datos.setTRCategoria(cadena);

    cout<<"Marca:";
      negocio.cargarCadena(cadena,20);
        datos.setTRMarca(cadena);

    cout<<"Cantidad:";
        cin>>entero;
        datos.setTRCantidad(entero);

    cout<<"Precio Unitario: ";
    cin>>decimal;
        datos.setTRprecioUnitario(decimal);

    cout<<"Impositivo Ventas:";
        datos.setTRImpositivoVentas(decimal);


    TransaxinventarioNegocio negocio2;
    negocio2.actualizarstock(1,datos); //  llamo al metodo de la clase TransaxinventarioNegocio que va a modificar el stock
    return negocio.guardarDatos(datos);


}

