#include<iostream>
#include<clocale>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include "TransaxinventarioVista.h"
#include "TransaxinventarioNegocio.h"
#include "Transaxinventario.h"

void TransaxinventarioVista::MostrarInventario(){

	TransaxinventarioNegocio negocio;
    TransaxInventario *vectorStock;

    vectorStock=negocio.Cargar_Vector_de_Stocks();

        for(int x;x<negocio.CantidadDeTransax();x++){
        cout<< "ID_Articulo: "<<vectorStock[x].getTRID_Articulo() <<endl;
		cout<< "fecha de Stock: ";vectorStock[x].getFechaTransax().MostrarFecha();
        cout<< "Anio de Stock: "<<vectorStock[x].getFechaTransax().getAnio() <<endl;
        cout<< "Mes de Stock: "<<vectorStock[x].getFechaTransax().getMes() <<endl;
		cout<< "Dia de Stock: "<<vectorStock[x].getFechaTransax().getDia() <<endl;
        cout<< "Categoria: "<<vectorStock[x].getTRCategoria() <<endl;
        cout<< "Marca: "<<vectorStock[x].getTRMarca() <<endl;
        cout<< "Cantidad: "<<vectorStock[x].getTRCantidad() <<endl;
        cout<< "QxBulto: "<<vectorStock[x].getTRQxBulto() <<endl;
        cout<< "Precio Unitario: "<<vectorStock[x].getTRprecioUnitario() <<endl;

        cout<< "-------------------------"<<endl;}

    delete vectorStock;
}


