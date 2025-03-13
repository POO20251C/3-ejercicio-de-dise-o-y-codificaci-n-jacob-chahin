#include "cliente.h"
#include "venta.h"

cliente::cliente(int id, string nombre, int telefono) : id(id), nombre(nombre), telefono(telefono){}

void cliente::agregarCompra(venta* venta){
    compras.emplace_back(venta);
}

void cliente::mostrarCompras(){
    for(venta* venta : compras)
        cout << "Costo total: " << venta->calcularTotal() << endl;
}
 
int cliente::obtenerID(){
    return id;
}

string cliente::obtenerNombre(){
    return nombre;
}