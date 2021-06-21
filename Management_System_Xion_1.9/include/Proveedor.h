#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef PROVEEDOR_H
#define PROVEEDOR_H

class Proveedor
{
		private:

		char nombre[50];
        char apellido [50];
        int cuil;
        char domicilio[50];
        char localidad[50];
        int telefono;
        char email[50];

		char condicionFiscal[50];
		char condicionDePago[50];

	public:
		Proveedor(){};

        void setNombre(const char*);
        void setApellido(const char*);
        void setCuil(int );
        void setDomicilio(const char*);
        void setLocalidad(const char*);
        void setTelefono(int);
        void setEmail(const char*);

        void setCondicionFiscal(const char *cadena);
		void setCondicionDePago(const char *cadena);
        ///gets

        const char* getNombre();
        const char* getApellido();
        int         getCuil();
        const char* getDomicilio();
        const char* getLocalidad();
        int         getTelefono();
        const char* getEmail();

        const char* getCondicionFiscal();
		const char* getCondicionDePago();
};


#endif // PROVEEDOR_H
