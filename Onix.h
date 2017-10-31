#pragma once
#include "RockPokemon.h"

using namespace std;

class Onix : public RockPokemon {
friend class Trainer;
public:
      Onix();
      void event(Trainer*);
};
