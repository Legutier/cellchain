#compiler
CC = g++

#compiler flags
CFLAGS = -c
BFLAGS = -o
#build
INCLUDES = -lsfml-graphics -lsfml-window -lsfml-system
FILE = main

all: main.cpp
	$(CC) $(CFLAGS) map.cpp
	$(CC) $(CFLAGS) node.cpp
	$(CC) $(CFLAGS) $(FILE).cpp
	$(CC) $(FILE).o node.o map.o $(BFLAGS)  cellChain $(INCLUDES)

clean:
	rm *.o
