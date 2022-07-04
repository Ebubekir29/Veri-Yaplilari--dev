hepsi:derle calistir
derle:
	g++ -I ./include/ -c ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -I ./include/ -c ./src/listesec.cpp -o ./lib/listesec.o
	
	g++ -I ./include/ ./src/main.cpp ./lib/dugum.o ./lib/listesec.o -o ./bin/main.exe
calistir:
	./bin/main