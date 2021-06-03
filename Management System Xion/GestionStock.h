#ifndef GESTIONSTOCK_H_INCLUDED
#define GESTIONSTOCK_H_INCLUDED

using namespace std;

void subMenuGestionStock(){
cout<<"SUBMENU GESTION DE STOCK"<<endl;

cout<<"1- CARGAR NUEVO ARTICULO"<<endl;

cout<<"2- MODIFICAR PRECIO DE ARTICULO EN STOCK"<<endl;

cout<<"3- CONSULTAR STOCK"<<endl;

cout<<"4- GENERAR REPORTE DE STOCK EN .CSV"<<endl;

cout<<"5- MIGRACION DE STOCK INICIAL"<<endl;

cout<<"6- VOLVER AL MENU PRINCIPAL "<<endl;
}


void GestionStock(){

int opc;
subMenuGestionStock();
cin>>opc;
system("cls");

while(opc!=6){
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
case 6:
    break;
default:
    break;
}

subMenuGestionStock();
cin>>opc;
system("cls");

}

}

#endif // GESTIONSTOCK_H_INCLUDED
