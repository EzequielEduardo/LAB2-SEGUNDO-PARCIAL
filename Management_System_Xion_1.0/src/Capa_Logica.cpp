#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Capa_Logica.h"


using namespace std;


///FECHA---------------------------------------------------------------------
Fecha::Fecha(int d, int m, int a){dia=d;mes=m;anio=a;}///constructor


///set
void Fecha::setDia(int d){dia=d;}
void Fecha::setMes(int d){mes=d;}
void Fecha::setAnio(int d){anio=d;}

///get
int Fecha::getDia(){return dia;}
int Fecha::getMes(){return mes;}
int Fecha::getAnio(){return anio;}

///PERSONA---------------------------------------------------------------------

        ///sets
        void Persona::setNombre(const char* cadena){strcpy(nombre,cadena);}
        void Persona::setApellido(const char* cadena){strcpy(apellido,cadena);}
        void Persona::setCuil(int n){cuil=n;}
        void Persona::setCuit(int n){cuit=n;}
        void Persona::setDomicilio(const char* cadena){strcpy(domicilio,cadena);}
        void Persona::setLocalidad(const char* cadena){strcpy(localidad,cadena);}
        void Persona::setTelefono(int n){telefono=n;}
        void Persona::setEmail(const char* cadena){strcpy(email,cadena);}
        void Persona::setFecha(int d,int m, int a){fecha.setDia(d);fecha.setMes(m);fecha.setAnio(a);}

        ///gets

        const char* Persona::getNombre(){return nombre;}
        const char* Persona::getApellido(){return apellido;}
        int         Persona::getCuil(){return cuil;}
        int         Persona::getCuit(){return cuit;}
        const char* Persona::getDomicilio(){return domicilio;}
        const char* Persona::getLocalidad(){return localidad;}
        int         Persona::getTelefono(){return telefono;}
        const char* Persona::getEmail(){return email;}
        int Persona::_getFechaDia(){return fecha.getDia();}
        int Persona::_getFechaMes(){return fecha.getMes();}
        int Persona::_getFechaAnio(){return fecha.getAnio();}



        /// CLIENTE_PROVEEEDOR--------------------------------------------------------------------------------------


        void Cliente_Proveedor::setCondicionFiscal(const char* cadena){scanf("%s", cadena);} ///set

        const char* Cliente_Proveedor::getCondicionFiscal(){return condicionFiscal;}///get

        ///VENDEDOR-------------------------------------------------------------------------------------------------

        ///sets
        void Vendedor::setTurno(const char *cadena){strcpy(turno,cadena);}
        void Vendedor::setSueldo(int n){sueldo=n;}

        ///gets
        const char* Vendedor::getTurno(){return turno;}
        int Vendedor::getSueldo(){return sueldo;}

///ARTICULO-------------------------------------------------------------------

        ///sets
        void Articulo::setCategoria(const char *c){strcpy(categoria,c);}
        void Articulo::setMarca(const char * c){strcpy(marca,c);}
        void Articulo::setPrecioReposicion(float n){precioReposicion=n;}
        void Articulo::setunidadesXpaquete(int n){unidadesXpaquete= n;}
        void Articulo::setCantidad(int n){cantidad=n;}
        void Articulo::setID(int n){ID=n;}
        void Articulo::setEstado(bool n){estado=n;}

        void Articulo::setFechaElaboracion(int d,int m, int a){fechaElaboracion.setDia(d);fechaElaboracion.setMes(m);fechaElaboracion.setAnio(a);}
        void Articulo::setFechaCompra(int d,int m, int a){fechaCompra.setDia(d);fechaCompra.setMes(m);fechaCompra.setAnio(a);}
        void Articulo::setFechaVenta(int d,int m, int a){fechaVenta.setDia(d);fechaVenta.setMes(m);fechaVenta.setAnio(a);}

        ///gets
        const char * Articulo::getCategoria(){return categoria;}
        const char * Articulo::getMarca(){return marca;}
        float Articulo::getPrecioReposicion(){return precioReposicion;}
        int Articulo::getunidadesXpaquete(){return unidadesXpaquete;}
        int Articulo::getCantidad(){return cantidad;}
        int Articulo::getID(){return ID;}
        bool Articulo::getEstado(){return estado;}

        int Articulo::_get_Dia_FechaElaboracion(){fechaElaboracion.getDia();}
        int Articulo::_get_Mes_FechaElaboracion(){fechaElaboracion.getMes();}
        int Articulo::_get_Anio_FechaElaboracion(){fechaElaboracion.getAnio();}

        int Articulo::_get_Dia_FechaCompra(){fechaCompra.getDia();}
        int Articulo::_get_Mes_FechaCompra(){fechaCompra.getMes();}
        int Articulo::_get_Anio_FechaCompra(){fechaCompra.getAnio();}

        int Articulo::_get_Dia_FechaVenta(){fechaVenta.getDia();}
        int Articulo::_get_Mes_FechaVenta(){fechaVenta.getMes();}
        int Articulo::_get_Anio_FechaVenta(){fechaVenta.getAnio();}

        ///COMPRAS_VENTAS---------------------------------------------------------------------------------------------

        ///sets
        void Compras_Ventas::setcantidad(int n){cantidad=n;}
        void Compras_Ventas::setTotal(float n){total=n;}

        ///gets
        int Compras_Ventas::setcantidad(){return cantidad;}
        float Compras_Ventas::setTotal(){return total;}
