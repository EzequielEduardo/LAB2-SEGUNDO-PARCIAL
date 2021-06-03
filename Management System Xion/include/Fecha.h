#ifndef FECHA_H
#define FECHA_H
using namespace std;

class Fecha{
    private:
        int dia, mes, anio;
    public:
        ///constructor
        Fecha();

        ///sets
        void Cargar();
        void setDia(int d){dia=d;}
        void setMes(int m){mes=m;}
        void setAnio(int a){anio=a;}

        ///gets
        void Mostrar();
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}

        ///destructor
        ~Fecha();
};

#endif // FECHA_H
