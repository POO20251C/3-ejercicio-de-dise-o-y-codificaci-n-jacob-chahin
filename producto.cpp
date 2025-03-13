#include "producto.h"

producto::producto(int id, string nombre, int precio, int existencia) : id(id), nombre(nombre), precio(precio), existencia(existencia){}

void producto::agregarStock(int cantidad){
    existencia +=cantidad;
}

void producto::reducirStock(int cantidad){
    if (existencia>=cantidad)
        existencia-=cantidad;
    else
        cout << "No hay suficiente inventario por reducir" << endl;
}

int producto::obtenerId(){
    return id;
}

string producto::obtenerNombre(){
    return nombre;
}

int producto::obtenerPrecio(){
    return precio;
}

int producto::obtenerExistencia(){
    return existencia;
}
