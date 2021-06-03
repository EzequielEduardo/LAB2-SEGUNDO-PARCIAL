#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Fecha.h"


using namespace std;

///destructor

Fecha::Fecha(){}

///constructor

Fecha::~Fecha(){}

///set

void Fecha::Cargar(){
    cout<<"Ingrese el dia: ";
    cin>>dia;
    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<"Ingrese el anio: ";
    cin>>anio;
}
///get

void Fecha::Mostrar(){
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
