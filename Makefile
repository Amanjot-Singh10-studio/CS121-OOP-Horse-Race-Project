HorseRace: Horse.o Race.o main.o
	g++ Horse.o Race.o main.o -o HorseRace

Horse.o: Horse.cpp Horse.h
	g++ -c Horse.cpp

Race.o: Race.cpp Race.h Horse.h
	g++ -c Race.cpp

main.o: main.cpp Race.h
	g++ -c main.cpp

run: HorseRace
	./HorseRace

clean: 
	rm HorseRace
	rm *.o
