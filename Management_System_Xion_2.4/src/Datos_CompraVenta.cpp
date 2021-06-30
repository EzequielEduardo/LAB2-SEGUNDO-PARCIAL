#include "Datos_CompraVenta.h"
#include<cstring>
#include <cstdio>
#include<string.h>


        void Articulo::setID_Articulo(const char* cadena){strcpy(id_Articulo,cadena);}
        void Articulo::setCategoria(const char* cadena){strcpy(categoria,cadena);};
        void Articulo::setMarca(const char* cadena){strcpy(marca,cadena);};
        void Articulo::setCantidad(int n){cantidad=n;}
        void Articulo::setprecioUnitario(float n){precioUnitario=n;}
        void Articulo::setImpositivoVentas(float n){impositivoVentas=n;}


        const char*  Articulo::getID_Articulo(){return id_Articulo;}
        const char*  Articulo::getCategoria(){return categoria;}
        const char*  Articulo::getMarca(){return marca;}
        int          Articulo::getCantidad(){return cantidad;}
        float        Articulo::getprecioUnitario(){return precioUnitario;}
        float        Articulo::getImpositivoVentas(){return impositivoVentas;}
