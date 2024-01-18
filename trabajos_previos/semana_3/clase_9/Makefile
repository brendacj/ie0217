# Nombre del programa de salida
TARGET = gestion_estudiantes.exe

# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main_makefile.cpp eje_makefile.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla genérica para generar archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar el directorio
clean:
	del $(TARGET) $(OBJECTS)
