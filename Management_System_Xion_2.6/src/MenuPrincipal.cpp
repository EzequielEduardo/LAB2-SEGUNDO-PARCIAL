#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include"MenuPrincipal.h"
#include"ArticuloVista.h"
#include"ClienteVista.h"
#include"ProveedorVista.h"
#include"EmpleadoVista.h"
#include"CompraVista.h"
#include "VentaVista.h"

using namespace std;


void MenuPrincipal::menuPrincipal()
{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
        cout<<"MENU PRINCIPAL"<<endl<<endl;
        cout<<"1-GESTION DE MAESTROS"<<endl;
        cout<<"2-GESTION DE INVENTARIOS"<<endl;
        cout<<"0-SALIR DEL PROGRAMA"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

		case 1:
		submenuMaestros();
		system("cls");
		break;

		case 2:
		submenuInventarios();
		system("cls");
		break;

        case 0:
            cout<<"-----FIN DEL PROGRAMA-----";
            break;

        default:
            break;

        }

    }
    while(opc!=0);

}

void MenuPrincipal::submenuMaestros()

{
    int opc;
    setlocale(LC_ALL,"Spanish");
    system("color 02");

    do
    {
		cout<<"MENU DE MAESTROS"<<endl<<endl;
        cout<<"1-MAESTRO DE EMPLEADOS"<<endl;
        cout<<"2-MAESTRO DE CLIENTES"<<endl;
		cout<<"3-MAESTRO DE PROVEEDORES"<<endl;
		cout<<"4-MAESTRO DE ARTICULOS"<<endl;
        cout<<"0-SALIR DEL PROGRAMA"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

		case 1:
           EmpleadoVista obj1;
           obj1.menuEmpleados();
           system("cls");
		break;

		case 2:
			ClienteVista obj2;
			obj2.menuClientes();
            system("cls");
		break;

		case 3:
			ProveedorVista obj3;
			obj3.menuProveedores();
			system("cls");
		break;

		case 4:
			ArticuloVista obj4;
			obj4.menuArticulos();

        case 0:
            cout<<"-----FIN DEL PROGRAMA-----";
            break;

        default:
            break;

        }


    }
    while(opc!=0);
}





void MenuPrincipal::submenuInventarios(){


    int opc;
    system("color 02");

    do
    {
		cout<<"MENU DE INVENTARIOS"<<endl<<endl;
        cout<<"1-CARGAR COMPRAS"<<endl;
        cout<<"2-LISTAR COMPRAS POR FECHA"<<endl;
		cout<<"3-CARGAR VENTAS"<<endl;
		cout<<"4-LISTAR VENTA POR FECHA"<<endl;
		cout<<"5-LISTAR STOCK POR FECHA"<<endl;
        cout<<"0-SALIR DEL PROGRAMA"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

		case 1:
           CompraVista obj1;
           obj1.cargarCompras();
           system("cls");
		break;

		case 2:
			//obj1.ListarComprasxFecha

            system("cls");
		break;

		case 3:
			VentaVista obj2;
			obj2.cargarVentas();
			system("cls");
		break;

		case 4:
			//obj2.listarVentasporFecha();
			system("cls");

		case 5:
			//TransaxInventarioVista obj3;
			//obj3.listarStockxFecha();
					system("cls");

        case 0:
            cout<<"-----FIN DEL PROGRAMA-----";
            break;

        default:
            break;

        }

    }
    while(opc!=0);
}



