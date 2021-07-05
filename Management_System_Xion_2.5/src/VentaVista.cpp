#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>

#include "Datos_CompraVenta.h"
#include "VentaNegocio.h"
#include "VentaVista.h"

using namespace std;

void VentaVista::menuVentas()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU VENTAS"<<endl<<endl;
        cout<<"1-CARGAR VENTAS"<<endl;
        cout<<"0-VOLVER AL MENU ANTERIOR"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

        case 1:

            if(cargarVentas()==true) cout<<"¡¡DATOS GUARDADOS CON EXITO!!"<<endl;
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


bool VentaVista::cargarVentas()
{
    VentaNegocio negocio;
    Articulo datos;
    char cadena[20];
    int entero;
    float decimal;

    cout << "Datos de la Venta:"<<endl;
    cout<<"Ingresar: "<<endl;

    cout<<"ID_Articulo: ";
        negocio.cargarCadena(cadena,20);
        datos.setID_Articulo(cadena);

    cout<<"Categoria:";
        negocio.cargarCadena(cadena,20);
        datos.setCategoria(cadena);

    cout<<"Marca:";
      negocio.cargarCadena(cadena,20);
        datos.setMarca(cadena);

    cout<<"Cantidad:";
        cin>>entero;
        datos.setCantidad(entero);

    cout<<"Precio Unitario: ";
    cin>>decimal;
        datos.setprecioUnitario(decimal);

    cout<<"Impositivo Ventas:";
        datos.setImpositivoVentas(decimal);

    return negocio.guardarDatos(datos);

return negocio.guardarDatos(datos);
}

