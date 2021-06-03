#ifndef GESTIONVENTAS_H_INCLUDED
#define GESTIONVENTAS_H_INCLUDED

using namespace std;

void subMenuGestionVentas(){

cout<<"SUBMENU GESTION DE VENTAS"<<endl;

cout<<"1- CARGAR FACTURA DE VENTAS"<<endl;

cout<<"2- MODIFICAR FACTURA DE VENTAS"<<endl;

cout<<"3- ANULAR FACTURA DE VENTAS"<<endl;

cout<<"4- GENERAR REPORTE DE VENTAS EN .CSV"<<endl;

cout<<"5- VOLVER AL MENU PRINCIPAL"<<endl;

}

void GestionVentas(){

int opc;
subMenuGestionVentas();
cin>>opc;
system("cls");

while(opc!=5){
switch(opc){
case 1:
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
default:
    break;
}

subMenuGestionVentas();
cin>>opc;
system("cls");

}

 }


#endif // GESTIONVENTAS_H_INCLUDED
