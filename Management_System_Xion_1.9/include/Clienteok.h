#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef CLIENTEOK_H
#define CLIENTEOK_H


class Cliente_Datos
{
		private:

		char nombre[50];
        char apellido [50];
        int cuil;
        char domicilio[50];
        char localidad[50];
        int telefono;
        char email[50];



	public:
		Cliente_Datos(){};

        void setNombre(const char*);
        void setApellido(const char*);
        void setCuil(int );
        void setDomicilio(const char*);
        void setLocalidad(const char*);
        void setTelefono(int);
        void setEmail(const char*);

        ///gets

        const char* getNombre();
        const char* getApellido();
        int         getCuil();
        const char* getDomicilio();
        const char* getLocalidad();
        int         getTelefono();
        const char* getEmail();

};

#endif // CLIENTEOK_H
