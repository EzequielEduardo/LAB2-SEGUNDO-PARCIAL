#include <iostream>

using namespace std;

#include "Capa_Interfaz_Usuario.h"
#include "Capa_Logica.h"
#include "Capa_Base_Datos.h"


int main()
{
    InterfazUsuario obj;
    int opc;
    obj.menuPrincipal();
    cin>>opc;
    system("cls");

    while(opc != 4)
    {

        switch(opc)
        {
        case 1: obj.GestionStock();
            break;
        case 2: obj.GestionCompras();
            break;
        case 3: obj.GestionVentas();
            break;
        case 4:
            break;
        default:
            cout<<"OPCION INCORRECTA ";
            break;
        }

        obj.menuPrincipal();
        cin>>opc;
        system("cls");

    }
    cout<<"FIN DEL PROGRAMA ";
    return 0;
}
