#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;
void Archivo(){
    ofstream Datos("productos.txt");
    if(Datos.is_open()){
        Datos << "Manzana 1.50" << endl;
        Datos << "Platano 0.80" << endl;
        Datos << "Leche 2.30" << endl;
        Datos.close();
    }
}
void AcctualizarPrecio(){
    string ProductoBuscado;
    float NuevoPrecio;
    bool encontrado = false;
    cout << "Ingrese el nombre del producto a buscar: ";
    cin >> ProductoBuscado;
    cout << "Ingrese el precio nuevo del producto: ";
    cin >> NuevoPrecio;
    ifstream original("productos.txt");
    ofstream temporal("temporal.txt");
    if(original.is_open() && temporal.is_open()){
        string productoOriginal;
        float precioOriginal;
        while(original >> productoOriginal >> precioOriginal){
            if(productoOriginal == ProductoBuscado){
                temporal << productoOriginal << " " << NuevoPrecio << endl;
                encontrado = true;
            }else{
                temporal << productoOriginal << " " << precioOriginal << endl;
            }
        }
        original.close();
        temporal.close();
        if(encontrado == true){
            remove("productos.txt");
            rename("temporal.txt" , "productos.txt");
            cout << "El producto " << ProductoBuscado << " a sido actualizado";
        }else{
            remove("temporal.txt");
        }
    }else{
        cout << "No se pudieron abrir los dos archivos";
    }
}
int main(){
Archivo();
AcctualizarPrecio();
    return 0;
}