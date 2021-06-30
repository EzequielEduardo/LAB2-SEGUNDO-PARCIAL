#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
#include "Fecha.h"

///FECHA---------------------------------------------------------------------
Fecha::Fecha(int d, int m, int a){dia=d;mes=m;anio=a;}///constructor


///set
void Fecha::setDia(int d){dia=d;}
void Fecha::setMes(int d){mes=d;}
void Fecha::setAnio(int d){anio=d;}

///get
int Fecha::getDia(){return dia;}
int Fecha::getMes(){return mes;}
int Fecha::getAnio(){return anio;}
