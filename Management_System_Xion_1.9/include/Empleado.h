#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{
		private:

		char nombre[50];
        char apellido [50];
        int cuil;
        char domicilio[50];
        char localidad[50];
        int telefono;
        char email[50];

		char turno[50];
		float sueldo;

	public:


        void setNombre(const char*);
        void setApellido(const char*);
        void setCuil(int );
        void setDomicilio(const char*);
        void setLocalidad(const char*);
        void setTelefono(int);
        void setEmail(const char*);

        void setTurno(const char *cadena);
		void setSueldo(const float);
        ///gets

        const char* getNombre();
        const char* getApellido();
        int         getCuil();
        const char* getDomicilio();
        const char* getLocalidad();
        int         getTelefono();
        const char* getEmail();

        const char* getTurno();
		const float getSueldo();
};
#endif // EMPLEADO_H
