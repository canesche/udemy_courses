all: main.o Peixe.o Cachorro.o Animal.o
	g++ -O3 main.o Cachorro.o Peixe.o Animal.o -o animal.exe

main:
	g++ -O3 -c main.cpp

Cachorro:
	g++ -O3 -c Cachorro.cpp Animal.cpp

Peixe:
	g++ -O3 -c Peixe.cpp Animal.cpp

clean:
	rm *.o *.exe
