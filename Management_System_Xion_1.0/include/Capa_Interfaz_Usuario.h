#ifndef CAPA_INTERFAZ_USUARIO_H
#define CAPA_INTERFAZ_USUARIO_H

#include "Capa_Logica.h"
#include "Capa_Base_Datos.h"


class InterfazUsuario{

    private:

    public:

        void menuPrincipal();
        void opciones_subMenuGestionStock();
        void GestionStock();
        void opciones_subMenuGestionCompras();
        void GestionCompras();
        void opciones_subMenuGestionVentas();
        void GestionVentas();

};

#endif // CAPA_INTERFAZ_USUARIO_H
