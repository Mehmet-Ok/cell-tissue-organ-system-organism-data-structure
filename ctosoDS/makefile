all: comp run

comp:
	g++ -I ./inc/ -o ./lib/Hucre.o -c ./src/Hucre.cpp
	g++ -I ./inc/ -o ./lib/Doku.o -c ./src/Doku.cpp
	g++ -I ./inc/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./inc/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./inc/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./inc/ -o ./lib/BST.o -c ./src/BST.cpp
	g++ -I ./inc/ -o ./lib/Organ.o -c ./src/Organ.cpp
	g++ -I ./inc/ -o ./lib/Sistem.o -c ./src/Sistem.cpp
	g++ -I ./inc/ -o ./lib/Organizma.o -c ./src/Organizma.cpp
	g++ -I ./inc/ -o ./lib/Kontrol.o -c ./src/Kontrol.cpp
	g++ -I ./inc/ -o ./bin/Test ./lib/Hucre.o ./lib/Doku.o ./lib/Queue.o ./lib/Radix.o ./lib/Node.o ./lib/BST.o ./lib/Organ.o ./lib/Sistem.o ./lib/Organizma.o ./lib/Kontrol.o ./src/Test.cpp

run:
	./bin/Test