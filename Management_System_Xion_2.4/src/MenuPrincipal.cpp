#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
#include"MenuPrincipal.h"
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
        cout<<"1-GESTION DE CLIENTES"<<endl;
        cout<<"2-GESTION DE PROVEEDORES"<<endl;
        cout<<"3-GESTION DE EMPLEADOS"<<endl;
        cout<<"4-GESTION DE COMPRAS"<<endl;
        cout<<"5-GESTION DE VENTAS"<<endl;
        cout<<"0-SALIR DEL PROGRAMA"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

		case 1:
			ClienteVista obj1;
			obj1.menuClientes();
            system("cls");
		break;

		case 2:

         ProveedorVista obj2;
         obj2.menuProveedores();
            system("cls");
		break;

		case 3:

           EmpleadoVista obj3;
           obj3.menuEmpleados();
            system("cls");
            break;
        case 4:

           CompraVista obj4;
           obj4.menuCompras();
            system("cls");
            break;
        case 5:

           VentaVista obj5;
           obj5.menuVentas();
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

