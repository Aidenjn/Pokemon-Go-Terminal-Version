#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class FlyingPokemon : public Tile {
friend class Trainer;

public:
      FlyingPokemon();
      void printX();
      void event(Trainer*);


};
