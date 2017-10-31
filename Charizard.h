#pragma once
#include "FlyingPokemon.h"

using namespace std;

class Charizard : public FlyingPokemon {
friend class Trainer;
public:
      Charizard();
      void event(Trainer*);

};
