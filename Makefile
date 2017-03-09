#Makefile for "geometrica" C++application
#Created by Luís Eduardo RIque and Ygor Almeida 09/03/2017

PROG = geometrica

SRCPATH = src/
BINPATH = bin/
BUILDPATH = build/
INCLUDEPATH = include/

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I$(INCLUDEPATH)
CC = g++

OBJS = $(BUILDPATH)main.o $(BUILDPATH)calcTrianguloEquilatero.o $(BUILDPATH)trianguloEquilatero.o

$(PROG) : $(OBJS)
	$(CC) -o $(BINPATH)$(PROG) $(OBJS)

$(BUILDPATH)main.o : $(INCLUDEPATH)calcTrianguloEquilatero.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)main.cpp -o $@

$(BUILDPATH)calcTrianguloEquilatero.o : $(INCLUDEPATH)calcTrianguloEquilatero.h $(INCLUDEPATH)trianguloEquilatero.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)calcTrianguloEquilatero.cpp -o $@

$(BUILDPATH)trianguloEquilatero.o : $(INCLUDEPATH)trianguloEquilatero.h
	$(CC) $(CPPFLAGS) -c $(SRCPATH)trianguloEquilatero.cpp -o $@

clean :
	rm -f core $(BINPATH)$(PROG) $(OBJS)