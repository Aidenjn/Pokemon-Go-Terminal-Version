#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class Prof : public Tile {
friend class Trainer;

public:
      Prof();
      void printX();
      void event(Trainer*);


};
  