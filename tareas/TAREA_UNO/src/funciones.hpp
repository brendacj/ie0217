#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

struct JuegoDatos {
    int inicio;
    int fin;
    int numAleatorio;
    int numContador;
    int numAdivina;
};

void mostrarMenu(int argc, char* argv[]);
void procesarOpcion(int argc, char* argv[], JuegoDatos& datos);
void juegoFacil(char* argv[], JuegoDatos datos);
int obtenerAleatorio(int fin, int inicio);

#endif