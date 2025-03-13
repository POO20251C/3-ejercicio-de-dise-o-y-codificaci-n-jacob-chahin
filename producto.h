#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <bits/stdc++.h>
using namespace std;

class producto{
    private:
        int id;
        string nombre;
        int precio;
        int existencia;
    public:
        producto(int id, string nombre, int precio, int existencia);
        void agregarStock(int cantidad);
        void reducirStock(int cantidad);
        int obtenerId();
        string obtenerNombre();
        int obtenerPrecio();
        int obtenerExistencia();
    };
#endif