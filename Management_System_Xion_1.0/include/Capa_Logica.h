#ifndef CAPA_LOGICA_H
#define CAPA_LOGICA_H




class Fecha{
    private:
        int dia, mes, anio;
    public:
        ///constructor
        Fecha(int,int,int);

        ///sets
        void setDia(int);
        void setMes(int);
        void setAnio(int);

        ///gets
        int getDia();
        int getMes();
        int getAnio();

};

///PERSONAS_-------------------------------------------------------------------
class Persona
{
    protected:
        char nombre[50];
        char apellido [50];
        int cuil;
        int cuit;
        char domicilio[50];
        char localidad[50];
        int telefono;
        char email[50];
        Fecha fecha;

    public:

        ///sets
        void setNombre(const char*);
        void setApellido(const char*);
        void setCuil(int );
        void setCuit(int );
        void setDomicilio(const char*);
        void setLocalidad(const char*);
        void setTelefono(int);
        void setEmail(const char*);
        void setFecha(int,int,int);

        ///gets
        const char* getNombre();
        const char* getApellido();
        int         getCuil();
        int         getCuit();
        const char* getDomicilio();
        const char* getLocalidad();
        int         getTelefono();
        const char* getEmail();
        int _getFechaDia();
        int _getFechaMes();
        int _getFechaAnio();

        };

class Cliente_Proveedor: public Persona
{
    private:
        char condicionFiscal[50];

    public:
        Cliente_Proveedor();///constructor
        void setCondicionFiscal(const char*);///sets
        const char* getCondicionFiscal();      ///gets

};


class Vendedor: public Persona{
    private:
        char turno[7];
        int sueldo;
    public:

        ///sets
        void setTurno(const char *);
        void setSueldo(int);

        ///gets
        const char* getTurno();
        int getSueldo();

};


///ARTICULO_-------------------------------------------------------------------

class Articulo{
    private:
        char categoria[50],marca[50];
        Fecha fechaElaboracion,fechaCompra,fechaVenta;
        float precioReposicion;
        int unidadesXpaquete,cantidad,ID;
        bool estado;
    public:

        ///sets
        void setCategoria(const char *);
        void setMarca(const char *);
        void setPrecioReposicion(float);
        void setunidadesXpaquete(int);
        void setCantidad(int);
        void setID(int);
        void setEstado(bool);

        void setFechaElaboracion(int,int,int);
        void setFechaCompra(int,int,int);
        void setFechaVenta(int,int,int);

        ///gets
        const char * getCategoria();
        const char * getMarca();
        float getPrecioReposicion();
        int getunidadesXpaquete();
        int getCantidad();
        int getID();
        bool getEstado();

        int _get_Dia_FechaElaboracion();
        int _get_Mes_FechaElaboracion();
        int _get_Anio_FechaElaboracion();

        int _get_Dia_FechaCompra();
        int _get_Mes_FechaCompra();
        int _get_Anio_FechaCompra();

        int _get_Dia_FechaVenta();
        int _get_Mes_FechaVenta();
        int _get_Anio_FechaVenta();

};

class Compras_Ventas: public Articulo{
    private:
        int cantidad;
        float total;

    public:
        ///sets
        void setcantidad(int);
        void setTotal(float);

        ///gets
        int setcantidad();
        float setTotal();

};

#endif // CAPA_LOGICA_H
