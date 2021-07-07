#ifndef TRANSAXINVENTARIOFILE_H
#define TRANSAXINVENTARIOFILE_H
#include "Transaxinventario.h"

class TransaxinventarioFile
{
    public:
        int  cantidadDeDatosGrabados();
        bool grabarEnDisco(TransaxInventario);
        TransaxInventario* obtener_Datos_Inventario();
        bool modificarEnDisco(TransaxInventario);
        int getStock();

};


#endif // TRANSAXINVENTARIOFILE_H
