#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#ifndef FECHA_H
#define FECHA_H

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

#endif // FECHA_H
