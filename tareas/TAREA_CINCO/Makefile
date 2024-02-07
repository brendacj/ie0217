TARGET1 = main.py
TARGET2 = parte_practica_2.py
ifeq ($(OS), Unix)
    all:
        cd src1 && python3 $(TARGET1)
		cd src2 && python3 $(TARGET2)

# Comandos para el sistema operativo Windows
else ifeq ($(OS), Windows_NT)
    all:
		cd src1 && python $(TARGET1)
		cd src2 && python $(TARGET2)

# Si el sistema operativo no es detectado
else
    run:
		@echo "Sistema operativo no soportado"
endif