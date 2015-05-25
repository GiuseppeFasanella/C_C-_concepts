##/usr/bin/g++

##CFLAGS opzioni di compilazione
##LFLAGS opzioni di linking

##Primo passo: da .cc/.cpp a file oggetto
##Secondo passo: linking e creazione dell'eseguibile

.SUFFIXES:.exe
.MRPROPER:clean ##Mastro Lindo
CC=c++
CFLAGS=-I. -c
LFLAGS=-I. -lm
CSOURCES:=${wildcard *.cc}
ESOURCES:=${wildcard *.cpp}
OBJECTS:=$(CSOURCES:.cc=.o) $(ESOURCES:.cpp=.o)
EXECS:=$(ESOURCES:.cpp=.exe)

##Implicit rules:
##Sorgente->Target:
##TAB rule
.cc.o:
	$(CC) $(CFLAGS) $<	

.cpp.o:
	$(CC) $(CFLAGS) $<

.o.exe: $(OBJECTS)
	$(CC) $(OBJECTS) $(LFLAGS) -o $@

$(EXECS):$(OBJECTS) ##Prima di fare gli eseguibili, assicurati di aver fatto gli oggetti

##Explicit rules (make esegue di default la prima regola esplicita)

##Produci tutti gli eseguibili necessari
all:$(EXECS)

clean:
	rm -f *.o
	rm -f *~