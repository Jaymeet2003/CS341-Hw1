SRC = main.cpp

all: Homework1.o
	g++ -g Homework1.o -o Homework1

Homework1.o: ${SRC}
	g++ -g ${SRC} -c -o Homework1.o

clean:
	rm -rf Homework1.o Homework1
