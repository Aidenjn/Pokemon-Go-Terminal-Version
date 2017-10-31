pokemango:

CC = g++
exe_file = pokemango
options =
$(exe_file): Game.o World.o Board.o Trainer.o Tile.o Pokestop.o Cave.o Pokemon.o PsychicPokemon.o RockPokemon.o FlyingPokemon.o Grass.o Prof.o Geodude.o Onix.o Charizard.o Rayquaza.o Mewtwo.o Espeon.o driver.o
	$(CC) Game.o World.o Board.o Trainer.o Tile.o Pokestop.o Cave.o Pokemon.o PsychicPokemon.o RockPokemon.o FlyingPokemon.o Grass.o Prof.o Geodude.o Onix.o Charizard.o Rayquaza.o Mewtwo.o Espeon.o driver.o -o $(exe_file)
Game.o: Game.cpp
	$(CC) -c Game.cpp
World.o: World.cpp
	$(CC) -c World.cpp $(option)
Board.o: Board.cpp
	$(CC) -c Board.cpp
Trainer.o: Trainer.cpp
	$(CC) -c Trainer.cpp $(option)
Tile.o: Tile.cpp
	$(CC) -c Tile.cpp
Pokestop.o: Pokestop.cpp
	$(CC) -c Pokestop.cpp
Cave.o: Cave.cpp
	$(CC) -c Cave.cpp
Pokemon.o: Pokemon.cpp
	$(CC) -c Pokemon.cpp
PsychicPokemon.o: PsychicPokemon.cpp
	$(CC) -c PsychicPokemon.cpp
RockPokemon.o: RockPokemon.cpp
	$(CC) -c RockPokemon.cpp
FlyingPokemon.o: FlyingPokemon.cpp
	$(CC) -c FlyingPokemon.cpp
Grass.o: Grass.cpp
	$(CC) -c Grass.cpp
Prof.o: Prof.cpp
	$(CC) -c Prof.cpp
Geodude.o: Geodude.cpp
	$(CC) -c Geodude.cpp
Onix.o: Onix.cpp
	$(CC) -c Onix.cpp
Charizard.o: Charizard.cpp
	$(CC) -c Charizard.cpp
Rayquaza.o: Rayquaza.cpp
	$(CC) -c Rayquaza.cpp
Mewtwo.o: Mewtwo.cpp
	$(CC) -c Mewtwo.cpp
Espeon.o: Espeon.cpp
	$(CC) -c Espeon.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp

debug: option += -D DEBUG
debug: $(exe_file)
clean:
	rm -f *.out *.o $(exe_file)
