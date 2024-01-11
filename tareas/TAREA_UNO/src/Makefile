# Makefile para el proyecto

# Nombre del programa de salida
TARGET = adivina.exe
# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp funciones.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.o)

# Target para limpiar el directorio
clean:
	del $(TARGET) $(OBJECTS)

# Target para compilar
build: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Target para ejecutar con argumentos 0 y 20
run:
	./$(TARGET) 0 20

# Target para compilar y correr
all: build run

# Regla genérica para generar archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean build run all