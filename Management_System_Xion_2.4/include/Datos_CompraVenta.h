#ifndef DATOS_COMPRAVENTA_H
#define DATOS_COMPRAVENTA_H


class Articulo
{
   private:
        char id_Articulo[20];
        char categoria[20];
        char marca[20];
        int cantidad;
        float precioUnitario,impositivoVentas;

    public:
        void setID_Articulo(const char* );
        void setCategoria(const char* );
        void setMarca(const char* );
        void setCantidad(int);
        void setprecioUnitario(float);
        void setImpositivoVentas(float);


        const char*  getID_Articulo();
        const char*  getCategoria();
        const char*  getMarca();
        int getCantidad();
        float getprecioUnitario();
        float getImpositivoVentas();

};

#endif // DATOS_COMPRAVENTA_H
