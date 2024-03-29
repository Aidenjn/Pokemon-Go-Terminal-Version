#pragma once
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>
#include <iostream>
#include "Trainer.h"

using namespace std;

class Tile {
protected:
      int tileNumber;
      int catchRate;
      bool isPokemon;
      string eventType;
      string nearbyMessage;
      string encounterMessage;
public:
      Tile();

      //SETTERS
      void setTileNumber(int);

      //GETTERS
      int getTileNumber();
      bool checkPokemon();
      string getEventType();
      string getNearbyMessage();
      string getEncounterMessage();

      //OTHER FUCTIONS
      virtual void printX() =0;
      virtual void event(Trainer*) =0;
      //void printMessage();

};
    