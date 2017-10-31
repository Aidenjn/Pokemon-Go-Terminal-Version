#pragma once
#include "Tile.h"
#include "Trainer.h"

using namespace std;

class Cave : public Tile {
friend class Trainer;
public:
      Cave();
      void printX();
      void event(Trainer*);


};
