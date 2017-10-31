#pragma once
#include "PsychicPokemon.h"

using namespace std;

class Espeon : public PsychicPokemon {
friend class Trainer;
public:
      Espeon();
      void event(Trainer*);
};
