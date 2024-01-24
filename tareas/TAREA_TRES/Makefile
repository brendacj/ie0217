# Determinar el sistema operativo
ifeq ($(OS),Windows_NT)
    # Comandos para Windows
    RM = del
    MKDIR = mkdir
else
    # Comandos para sistemas tipo Unix (Linux, macOS)
    RM = rm -f
    MKDIR = mkdir -p
endif

# Nombre de los programas de salida
TARGET1 = matriz.exe
TARGET2 = correo.exe

# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES1 = src/main.cpp
SOURCES2 = src2/VerificarCorreo.cpp src2/main.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS1 = $(SOURCES1:.cpp=.o)
OBJECTS2 = $(SOURCES2:.cpp=.o)

# Directorio de salida para archivos compilados
BUILD_DIR = build

# Target para compilar y ejecutar el programa 1
programa1: build1 run1

# Target para compilar y ejecutar el programa 1
programa2: build2 run2

# Target para limpiar
clean1:
	$(RM) $(TARGET1)

clean2:
	$(RM) $(TARGET2)

# Target para compilar
build1: $(OBJECTS1)
	$(CXX) $(CXXFLAGS) -o $(TARGET1) $(OBJECTS1)

build2: $(OBJECTS2)
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(OBJECTS2)

# Target para ejecutar
run1:
	./$(TARGET1)

run2:
	./$(TARGET2)

# Regla genérica para generar archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean build1 build2 run1 run2 all