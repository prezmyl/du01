# Projekt: DU1
# Autor:   Přemysl Poláš
# Datum:   03.10.2023

CC = g++
CFLAGS = -Wall -Wextra -g
 
main: main.o wordlistMode.o
	$(CC) $(CFLAGS) -o main main.o wordlistMode.o
