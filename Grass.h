#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class Grass : public Tile {
friend class Trainer;
public:
      Grass();
      void printX();
      void event(Trainer*);


};
  