#pragma once
#include "RockPokemon.h"

using namespace std;

class Geodude : public RockPokemon {
friend class Trainer;
public:
      Geodude();
      void event(Trainer*);

};
