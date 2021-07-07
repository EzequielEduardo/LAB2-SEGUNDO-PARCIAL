#include<iostream>

#include "TransaxinventarioFile.h"
#include "Transaxinventario.h"

using namespace std;

int TransaxinventarioFile::cantidadDeDatosGrabados()
{

    TransaxInventario inventario;
    int cantidad=0;

    FILE *p;
    p=fopen("Inventario.dat","rb");
    if(p==NULL) return false;

    while(fread(&inventario, sizeof (TransaxInventario), 1, p)==true)cantidad++;


    fclose(p);
    return cantidad;
}


bool TransaxinventarioFile::grabarEnDisco(TransaxInventario datos)
{

    FILE *p;
    p=fopen("Inventario.dat","ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&datos, sizeof (TransaxInventario), 1, p);
    fclose(p);
    return escribio;
}

TransaxInventario* TransaxinventarioFile::obtener_Datos_Inventario()
{

    int pos=0,cant=cantidadDeDatosGrabados();
    TransaxInventario* vectorInventario= new TransaxInventario[cant];
    if(vectorInventario==NULL) return 0;

    FILE *p;
    p=fopen("Inventario.dat","rb");
    if(p==NULL) return 0;

    for(pos; pos<cant; pos++)
    {

        fseek(p, pos*sizeof (TransaxInventario), 0);
        fread(&vectorInventario[pos], sizeof (TransaxInventario), 1, p);

    }

    fclose(p);
    return vectorInventario;
}


bool TransaxinventarioFile::modificarEnDisco(TransaxInventario datos)  //paso por parametro el registro a agregar
{
    int cant=cantidadDeDatosGrabados();// pido la cantidad de registros

    if(cant<10)
    {
        grabarEnDisco(datos);   //verifico si la cantidad es menor a 10, en cuyo caso grabo el dato al final del archivo
    }
    else  //caso contrario:
    {

        TransaxInventario *vec=obtener_Datos_Inventario(); //copio los datos del archivo en vector

        for(int x=0; x<10; x++) vec[x]=vec[x+1]; // voy sobreescribiendo los datos del vector

        vec[9]=datos;// agrego el ultimo dato

        FILE *p;
        p=fopen("Inventario.dat","wb"); //borro el archivo y lo truco a longitud cero
        if(p==NULL) return 0;


        for(int pos=0; pos<10; pos++) // //escribo el archivo de vuelta con la lista actualizada
        {
            fseek(p, pos*sizeof (TransaxInventario), 0);
            fwrite(&vec[pos], sizeof (TransaxInventario), 1, p);
        }
        fclose(p);
        return 1;
    }
}


int TransaxinventarioFile::getStock(){
        TransaxInventario datos;
        FILE *p;
        p=fopen("Inventario.dat","rb");// habro el archivo en modo lectura
        if(p==NULL) return 0;
        fseek(p,sizeof (TransaxInventario), 2); //posiciono el puntero al final del archivo
        fread(&datos, sizeof (TransaxInventario), 1, p);
return datos.getStock();//devuelvo el stock disponible;
}

