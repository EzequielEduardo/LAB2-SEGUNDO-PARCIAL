#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef TRANSAXINVENTARIO_H
#define TRANSAXINVENTARIO_H
#include"Fecha.h"

class TransaxInventario
{
	private:
        char trid_Articulo[20];
        char trcategoria[20];
        char trmarca[20];
        char tipoTransax[10];
        int trcantidad;
        int trqxBulto;
        float trprecioUnitario;
        Fecha fechaTransax;
        int stock;
        float stockValorizado;
        float precioDeArt;

	public:
		//SETS
		void setTRID_Articulo(const char* );
        void setTRCategoria(const char* );
        void setTRMarca(const char* );
        void setTipoTransax(bool);
        void setTRCantidad(int);
        void setTRQxBulto(int);
        void setTRprecioUnitario(float);
		void setTRImpositivoVentas(float);
        void setFechaTransax(Fecha);
        void _setFechaTransax(int,int,int);
        void setStock(int);
        void setStockValorizado(float);
        void setPrecioArt(float);

		//GETS
        const char*  getTRID_Articulo();
        const char*  getTRCategoria();
        const char*  getTRMarca();
        const char*  getTipoTransax(){return tipoTransax;};
        int getTRCantidad();
		int getTRQxBulto();
        float getTRprecioUnitario();
        float getTRImpositivoVentas();
		Fecha getFechaTransax();
        int getStock();
        float getStockValorizado();
        float getPrecioArt();

        //CONSTRUCTOR
		TransaxInventario(){};
        TransaxInventario(int,int,int);

};

#endif // TRANSAXINVENTARIO_H
