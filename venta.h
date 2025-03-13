#ifndef VENTA_H
#define VENTA_H
#include <bits/stdc++.h>
using namespace std;

class producto;

class venta{
    private:
        int id;
        vector<producto*> productos;
    public:
        venta(int id, vector<producto*>& productos);
        int calcularTotal();

};
#endif