#include "cliente.hpp"
#include "producto.hpp"
#include "venta.hpp"

int main() {
    producto p1(1, "Balón de fútbol", 25.99, 10);

    producto p2 (2, "Raqueta de tenis", 50.99, 5);

    cliente cliente (1, "Juan Pérez", 5551234);

    vector<producto*> productos = {&p1, &p2};

    venta venta (1, productos);

    cliente.agregarCompra(&venta);

    cliente.mostrarCompras();

    return 0;
}