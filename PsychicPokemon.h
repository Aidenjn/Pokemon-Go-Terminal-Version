#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class PsychicPokemon : public Tile {
friend class Trainer;
public:
      PsychicPokemon();
      void printX();
      void event(Trainer*);


};
