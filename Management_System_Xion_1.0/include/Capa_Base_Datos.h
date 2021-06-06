#ifndef CAPA_BASE_DATOS_H
#define CAPA_BASE_DATOS_H
#include "Capa_Logica.h"

class Capa_Base_Datos
{
    private:

    public:

    void grabarEnDisco_Cliente(Cliente_Proveedor&);
    void leerDeDisco_Cliente(Cliente_Proveedor&,int);

    void grabarEnDisco_Proveedor(Cliente_Proveedor&);
    void leerDeDisco_Proveedor(Cliente_Proveedor&,int);

    void grabarEnDisco_Vendedor(Vendedor&);
    void leerDeDisco__Vendedor(Vendedor&,int);

    void grabarEnDisco_Compras(Compras_Ventas&);
    void leerDeDisco_Compras(Compras_Ventas&,int);
    void grabarEnDisco_Ventas(Compras_Ventas&);
    void leerDeDisco_Ventas(Compras_Ventas&,int);

};

#endif // CAPA_BASE_DATOS_H
