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
        cout<<"0-SALIR DEL PROGRAMA"<<endl<<endl;
        cout<<"Ingresar Opcion: ";
        cin>>opc;

        system("cls");
        switch(opc)
        {

		case 1:
			ClienteVista obj;
			obj.menuClientes();
            system("cls");
		break;

		case 2:

         ProveedorVista obj1;
         obj1.menuProveedores();
            system("cls");
		break;

		case 3:
           EmpleadoVista obj2;
           obj2.menuEmpleados();


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

