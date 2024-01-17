# Makefile para el proyecto

# Nombre del programa de salida
TARGET = material.exe
# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = MaterialAudiovisual.cpp MaterialLectura.cpp Libro.cpp Noticia.cpp Pelicula.cpp Podcast.cpp MaterialOrdenado.cpp MaterialPrecio.cpp main.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.o)

# Target para compilar y correr
all: build run

# Target para limpiar el directorio
clean:
	del $(TARGET) $(OBJECTS)

# Target para compilar
build: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Target para ejecutar
run:
	./$(TARGET)

# Regla genérica para generar archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean build run all