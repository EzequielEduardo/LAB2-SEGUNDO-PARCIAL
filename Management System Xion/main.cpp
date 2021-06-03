#include <iostream>
#include "GestionCompras.h"
#include "GestionStock.h"
#include "GestionVentas.h"
#include "Persona.h"
using namespace std;

void menuPrincipal()
{

    cout<<" MENU PRINCIPAL "<<endl;
    cout<<"1- GESTION DE STOCK "<<endl;
    cout<<"2- GESTION DE COMPRAS "<<endl;
    cout<<"3- GESTION DE VENTAS "<<endl;
    cout<<"4- SALIR DE M.S.X. "<<endl;

}


int main()
{
    int opc;
    menuPrincipal();
    cin>>opc;
    system("cls");

    while(opc != 4)
    {

        switch(opc)
        {
        case 1: GestionStock();
            break;
        case 2: GestionCompras();
            break;
        case 3: GestionVentas();
            break;
        default:
            if(opc==4)
            {
                break;
            }
            else
            {
                cout<<"OPCION INCORRECTA ";
            }
            break;

        }

        menuPrincipal();
        cin>>opc;
        system("cls");

    }
    cout<<"FIN DEL PROGRAMA ";
    return 0;
}
