#include "TransaxinventarioNegocio.h"
#include "TransaxinventarioFile.h"

void TransaxinventarioNegocio::actualizarstock(bool tipoTrans,TransaxInventario datos)
{
    TransaxinventarioFile archivo;
    int stock=archivo.getStock();// cargo la disponibilidad del stock en una variable

    if(tipoTrans==false) //verifico si la transaccion es de tipo compra:
    {
        stock+=datos.getTRCantidad();//sumo cantidad de productos al stock
    }
    else// caso contrario,si la transaccion es de tipo compra:
    {
        stock-=datos.getTRCantidad();//resto cantidad de productos al stock
    }

     datos.setStock(stock);//modifico el stock en la clase Transinventario

     archivo.modificarEnDisco(datos);  //llamo a la funcion que actualiza el inventario
}
