#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Capa_Interfaz_Usuario.h"


using namespace std;

///-----------------------------------------------------------------------------------------------GESTION_STOCK
 void InterfazUsuario::menuPrincipal()
{
    cout<<" MENU PRINCIPAL "<<endl;
    cout<<"1- GESTION DE STOCK "<<endl;
    cout<<"2- GESTION DE COMPRAS "<<endl;
    cout<<"3- GESTION DE VENTAS "<<endl;
    cout<<"4- SALIR DE M.S.X. "<<endl;
}

void InterfazUsuario::opciones_subMenuGestionStock(){
cout<<"SUBMENU GESTION DE STOCK"<<endl;

cout<<"1- CARGAR NUEVO ARTICULO"<<endl;

cout<<"2- MODIFICAR PRECIO DE ARTICULO EN STOCK"<<endl;

cout<<"3- CONSULTAR STOCK"<<endl;

cout<<"4- GENERAR REPORTE DE STOCK EN .CSV"<<endl;

cout<<"5- MIGRACION DE STOCK INICIAL"<<endl;

cout<<"6- VOLVER AL MENU PRINCIPAL "<<endl;
}



void InterfazUsuario::GestionStock(){

int opc;
opciones_subMenuGestionStock();
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

opciones_subMenuGestionStock();
cin>>opc;
system("cls");

}

}


///-----------------------------------------------------------------------------------------------GESTION_COMPRAS

void InterfazUsuario::opciones_subMenuGestionCompras(){

cout<<"SUBMENU GESTION DE COMPRAS"<<endl;

cout<<"1- CARGAR FACTURA DE COMPRAS"<<endl;

cout<<"2- MODIFICAR FACTURA DE COMPRAS"<<endl;

cout<<"3- ANULAR FACTURA DE COMPRAS"<<endl;

cout<<"4- GENERAR REPORTE DE COMPRAS EN .CSV"<<endl;

cout<<"5- VOLVER AL MENU PRINCIPAL"<<endl;
}



void InterfazUsuario::GestionCompras(){

int opc;
opciones_subMenuGestionCompras();
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

opciones_subMenuGestionCompras();
cin>>opc;
system("cls");

}

}

///-----------------------------------------------------------------------------------------------GESTION_VENTAS

void InterfazUsuario::opciones_subMenuGestionVentas(){

cout<<"SUBMENU GESTION DE VENTAS"<<endl;

cout<<"1- CARGAR FACTURA DE VENTAS"<<endl;

cout<<"2- MODIFICAR FACTURA DE VENTAS"<<endl;

cout<<"3- ANULAR FACTURA DE VENTAS"<<endl;

cout<<"4- GENERAR REPORTE DE VENTAS EN .CSV"<<endl;

cout<<"5- VOLVER AL MENU PRINCIPAL"<<endl;

}

void InterfazUsuario::GestionVentas(){

int opc;
opciones_subMenuGestionVentas();
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
opciones_subMenuGestionVentas();
cin>>opc;
system("cls");

}

 }
