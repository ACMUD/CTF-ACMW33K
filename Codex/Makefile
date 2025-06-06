# Nombre del ejecutable
TARGET = codex

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -O2

# Archivos fuente
SRC = src/main.c

# Regla por defecto
all: build

# Compila el programa
build: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Elimina el ejecutable
clean:
	rm -f $(TARGET)
