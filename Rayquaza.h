#pragma once
#include "FlyingPokemon.h"

using namespace std;

class Rayquaza : public FlyingPokemon {
friend class Trainer;
public:
      Rayquaza();
      void event(Trainer*);
};
