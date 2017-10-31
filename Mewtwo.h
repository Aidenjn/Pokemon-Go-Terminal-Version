#pragma once
#include "PsychicPokemon.h"

using namespace std;

class Mewtwo : public PsychicPokemon {
friend class Trainer;
public:
      Mewtwo();
      void event(Trainer*);

};
