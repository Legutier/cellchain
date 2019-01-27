#compiler
CC = g++

#compiler flags
CFLAGS = -c
BFLAGS = -o
#build
INCLUDES = -lsfml-graphics -lsfml-window -lsfml-system
FILE = main

all: main.cpp
	$(CC) $(CFLAGS) $(FILE).cpp
	$(CC) $(FILE).o    $(BFLAGS) sfml-app $(INCLUDES)
	rm $(FILE).o
