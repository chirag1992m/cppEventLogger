#Specifying the compiler
CC=g++
CFLAGS=-Wall -c 

usage: eventLogger.o usage.o
	$(CC) usage.o eventLogger.o -o usage

usage.o: usage.cpp
	$(CC) $(CFLAGS) usage.cpp

eventLogger.o: ../eventLogger.cpp ../eventLogger.hpp
	$(CC) $(CFLAGS) ../eventLogger.cpp

clean:
	rm -rf *.o
