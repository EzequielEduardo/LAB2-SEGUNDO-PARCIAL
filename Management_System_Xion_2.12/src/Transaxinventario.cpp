#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include "Transaxinventario.h"

		void TransaxInventario::setTRID_Articulo(const char* cadena){strcpy(trid_Articulo,cadena);}
        void TransaxInventario::setTRCategoria(const char* cadena){strcpy(trcategoria,cadena);};
        void TransaxInventario::setTRMarca(const char* cadena){strcpy(trmarca,cadena);};
        void TransaxInventario::setTRCantidad(int n){trcantidad=n;}
		void TransaxInventario::setTRQxBulto(int b){trqxBulto=b;}
        void TransaxInventario::setTRprecioUnitario(float n){trprecioUnitario=n;}
		void TransaxInventario::setFechaTransax(Fecha xx){fechaTransax=xx;}
		void TransaxInventario::setStock(float n){stock=n;}
        void TransaxInventario::setStockValorizado(float n){stockValorizado=n;}
        void TransaxInventario::setPrecioArt(float n){precioDeArt=n;}


        TransaxInventario::TransaxInventario(int d,int m,int a){
            fechaTransax.setFecha(d,m,a);
            stock=stockValorizado=precioDeArt=0;
            }

        const char*  TransaxInventario::getTRID_Articulo(){return trid_Articulo;}
        const char*  TransaxInventario::getTRCategoria(){return trcategoria;}
        const char*  TransaxInventario::getTRMarca(){return trmarca;}
        int          TransaxInventario::getTRCantidad(){return trcantidad;}
		int          TransaxInventario::getTRQxBulto(){return trqxBulto;}
        float        TransaxInventario::getTRprecioUnitario(){return trprecioUnitario;}
		Fecha        TransaxInventario::getFechaTransax(){return fechaTransax;}
		float        TransaxInventario::getStock(){return stock;}
        float        TransaxInventario::getStockValorizado(){return stockValorizado;}
        float        TransaxInventario::getPrecioArt(){return precioDeArt;}
