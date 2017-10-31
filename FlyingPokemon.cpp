#pragma once
#include "FlyingPokemon.h"

using namespace std;

FlyingPokemon::FlyingPokemon() {
      isPokemon = true;
      eventType = "FlyingPokemon";
      nearbyMessage = "There are some feathers on the ground, somebirdie must be close by.";
      encounterMessage = "You encountered a flying pokemon!";
      catchRate = 50;
}

void FlyingPokemon::printX() {
      cout << "\033[1;36m";
      cout << "F";
      cout << "\033[0m";
}

void FlyingPokemon::event(Trainer *trainer) {

}
