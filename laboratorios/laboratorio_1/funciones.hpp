#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>

const int MAX_EMPLEADOS = 10;

struct Empleado {
    int id;
    std::string nombre;
    double salario;
};

void mostrarMenu();
void procesarOpcion(Empleado empleados[], int& numEmpleados);
void agregarEmpleados(Empleado empleados[], int& numEmpleados);
void listarEmpleado(const Empleado empleados[], int& numEmpleados);
void eliminarEmpleado(Empleado empleados[], int& numEmpleados);
#endif