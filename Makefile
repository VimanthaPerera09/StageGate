CC=g++
CFLAGS= -I. -g -std=c++11

main: main.cpp
	$(CC) $(CFLAGS) -g -o main main.cpp 