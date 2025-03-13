#ifndef CLIENTE_H
#define CLIENTE_H
#include <bits/stdc++.h>
using namespace std;

class venta;

class cliente{
    private:
        int id;
        string nombre;
        int telefono;
        vector<venta*>compras;
    public:
        cliente(int id, string nombre, int telefono);
        void agregarCompra(venta* venta);
        void mostrarCompras();
        int obtenerID();
        string obtenerNombre();
};

#endif