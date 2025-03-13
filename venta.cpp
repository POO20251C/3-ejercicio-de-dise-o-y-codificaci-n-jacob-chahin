#include "venta.h"
#include "producto.h"

venta::venta(int id, vector<producto*>& productos) : id(id), productos(productos){}

int venta::calcularTotal(){
    int total = 0;
    for(producto* producto : productos)
        total+=producto->obtenerPrecio();
    return total;
}