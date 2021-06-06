#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

#include "Capa_Base_Datos.h"




using namespace std;



///CLIENTE-----------------------------------------------------------------------------

    bool grabarEnDisco_Cliente(Cliente_Proveedor &Cliente){
        FILE *p;
        p=fopen("Cliente.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Cliente, sizeof Cliente, 1, p);
        fclose(p);
        return escribio;
    }

    bool leerDeDisco_Cliente(Cliente_Proveedor &Cliente,int pos){
        FILE *p;
        p=fopen("Cliente.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Cliente, 0);
        bool leyo=fread(&Cliente, sizeof Cliente, 1, p);
        fclose(p);
        return leyo;
    }


///PROVEEDOR-----------------------------------------------------------------------------

    bool grabarEnDisco_Proveedor(Cliente_Proveedor &Proveedor){
        FILE *p;
        p=fopen("Proveedor.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Proveedor, sizeof Proveedor, 1, p);
        fclose(p);
        return escribio;
    }

    bool leerDeDisco_Proveedor(Cliente_Proveedor &Proveedor,int pos){
        FILE *p;
        p=fopen("Proveedor.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Proveedor, 0);
        bool leyo=fread(&Proveedor, sizeof Proveedor, 1, p);
        fclose(p);
        return leyo;
    }


  ///VENDEDOR-----------------------------------------------------------------------------

    bool grabarEnDisco_Vendedor(Vendedor & Vendedor){
        FILE *p;
        p=fopen("Vendedor.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Vendedor, sizeof Vendedor, 1, p);
        fclose(p);
        return escribio;
    }

    bool leerDeDisco__Vendedor(Vendedor & Vendedor,int pos){
        FILE *p;
        p=fopen("Vendedor.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Vendedor, 0);
        bool leyo=fread(&Vendedor, sizeof Vendedor, 1, p);
        fclose(p);
        return leyo;
    }


///COMPRAS-----------------------------------------------------------------------------

    bool grabarEnDisco_Compras(Compras_Ventas &Compras){
        FILE *p;
        p=fopen("Compras.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Compras, sizeof Compras, 1, p);
        fclose(p);
        return escribio;
    }

    bool leerDeDisco_Compras(Compras_Ventas &Compras,int pos){
        FILE *p;
        p=fopen("Compras.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof Compras, 0);
        bool leyo=fread(&Compras, sizeof Compras, 1, p);
        fclose(p);
        return leyo;
    }



///VENTAS-----------------------------------------------------------------------------

    bool grabarEnDisco_Ventas(Compras_Ventas &Ventas){
        FILE *p;
        p=fopen("Ventas.dat","ab");
        if(p==NULL) return false;
        bool escribio=fwrite(&Ventas, sizeof Ventas, 1, p);
        fclose(p);
        return escribio;
    }

    bool leerDeDisco_Ventas(Compras_Ventas &Ventas,int pos){
        FILE *p;
        p=fopen("Ventas.dat","rb");
        if(p==NULL) return false;
        fseek(p, pos*sizeof  Ventas, 0);
        bool leyo=fread(&Ventas, sizeof Ventas, 1, p);
        fclose(p);
        return leyo;
    }
