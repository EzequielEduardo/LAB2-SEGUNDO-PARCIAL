#include"Articulo.h"
#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstring>
#include <cstdio>
#include<string.h>
using namespace std;
		//sets
        void Articulo::setID_Articulo(const char* cadena){strcpy(id_Articulo,cadena);}
        void Articulo::setCategoria(const char* cadena){strcpy(categoria,cadena);};
        void Articulo::setMarca(const char* cadena){strcpy(marca,cadena);};
		void Articulo::setQxBulto(int b){qxBulto=b;}
        void Articulo::setprecioUnitario(float n){precioUnitario=n;}

		//gets
        const char*  Articulo::getID_Articulo(){return id_Articulo;}
        const char*  Articulo::getCategoria(){return categoria;}
        const char*  Articulo::getMarca(){return marca;}
		int          Articulo::getQxBulto(){return qxBulto;}
        float        Articulo::getprecioUnitario(){return precioUnitario;}





