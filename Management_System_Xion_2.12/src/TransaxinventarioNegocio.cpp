#include "TransaxinventarioNegocio.h"
#include "TransaxinventarioFile.h"

//METODOS TRANSAX
void TransaxinventarioNegocio::actualizarstock(bool tipoTrans,TransaxInventario &datos)
{
    TransaxinventarioFile archivo;
    TransaxInventario objStock=datos;

    int stock=archivo.getTRCantidad();// cargo la disponibilidad del stock INICIAL en una variable

    if(tipoTrans==0) //verifico si la transaccion es de tipo VENTA:
    {
        stock-=datos.getTRCantidad();//sumo cantidad de productos al stock

    }
    else// caso contrario,si la transaccion es de tipo compra:
    {
        stock+=datos.getTRCantidad();//resto cantidad de productos al stock

    }
        objStock.setTRCantidad(stock);//modifico el stock en la instancia de la clase clase Transinventario
        float stockValorizado=stock*datos.getPrecioArt();
        objStock.setStockValorizado(stockValorizado);//modifico el stockValorizado en la instancia de la clase clase Transinventario
        archivo.grabarDatosInventario(objStock); //actualizo el stock
}

int TransaxinventarioNegocio::CantidadDeTransax()
{

    TransaxinventarioFile archivo;

    return archivo.cantidadDeTransaxGrabadas();

}

void TransaxinventarioNegocio::cargarCadena(char *pal, int tam){
			int i;
			fflush(stdin);
			for(i=0;i<tam;i++){
				pal[i]=cin.get();
				if(pal[i]=='\n') break;
				}
				pal[i]='\0';
				fflush(stdin);
				}

TransaxInventario* TransaxinventarioNegocio::Cargar_Vector_de_Stocks()
{
    TransaxInventario *vectorStocks;
    TransaxinventarioFile archivo;
    vectorStocks=archivo.obtener_Datos_Inventario();

return vectorStocks;
}


float getTRCantidad(){
TransaxinventarioFile archivo;
return archivo.getTRCantidad();
}

//METODOS COMPRAS
bool TransaxinventarioNegocio::guardarDatosCompra(TransaxInventario compra)
{
    TransaxinventarioFile archivo;
    return archivo.grabarDatosCompraEnDisco(compra);
}

TransaxInventario* TransaxinventarioNegocio::Cargar_Vector_de_Compras()
{
    TransaxInventario *vectorCompras;
    TransaxinventarioFile archivo;
    vectorCompras=archivo.obtener_Datos_Compras();

return vectorCompras;
}


int TransaxinventarioNegocio::CantidadDeCompras()
{

    TransaxinventarioFile archivo;

    return archivo.cantidadDeDatosComprasGrabadas();

}


//METODOS VENTAS

bool TransaxinventarioNegocio::guardarDatosVenta(TransaxInventario venta)
{
    TransaxinventarioFile archivo;
    return archivo.grabarDatosVentasEnDisco(venta);
}

TransaxInventario* TransaxinventarioNegocio::Cargar_Vector_de_Ventas()
{
    TransaxInventario *vectorVentas;
    TransaxinventarioFile archivo;
    vectorVentas=archivo.obtener_Datos_Ventas();

return vectorVentas;
}

int TransaxinventarioNegocio::CantidadDeVentas()
{

    TransaxinventarioFile archivo;

    return archivo.cantidadDeDatosVentasGrabadas();

}


