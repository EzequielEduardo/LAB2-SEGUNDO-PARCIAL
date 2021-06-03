#ifndef GESTIONCOMPRAS_H_INCLUDED
#define GESTIONCOMPRAS_H_INCLUDED

using namespace std;

void subMenuGestionCompras(){

cout<<"SUBMENU GESTION DE COMPRAS"<<endl;

cout<<"1- CARGAR FACTURA DE COMPRAS"<<endl;

cout<<"2- MODIFICAR FACTURA DE COMPRAS"<<endl;

cout<<"3- ANULAR FACTURA DE COMPRAS"<<endl;

cout<<"4- GENERAR REPORTE DE COMPRAS EN .CSV"<<endl;

cout<<"5- VOLVER AL MENU PRINCIPAL"<<endl;
}

void GestionCompras(){

int opc;
subMenuGestionCompras();
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

subMenuGestionCompras();
cin>>opc;
system("cls");

}

}

#endif // GESTIONCOMPRAS_H_INCLUDED
