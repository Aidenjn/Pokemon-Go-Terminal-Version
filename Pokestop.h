#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class Pokestop : public Tile {
friend class Trainer;

public:
      Pokestop();
      void printX();
      void event(Trainer*);

};

// #pragma once
//
// using namespace std;
//
// class Human : public Creature {
//
// public:
//       Human();
//       int getDamage();
// };
