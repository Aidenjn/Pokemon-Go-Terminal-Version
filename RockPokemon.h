#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class RockPokemon : public Tile {
friend class Trainer;

public:
      RockPokemon();
      void printX();
      void event(Trainer*);

};
