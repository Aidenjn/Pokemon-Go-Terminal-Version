#pragma once
#include "RockPokemon.h"

using namespace std;

RockPokemon::RockPokemon() {
      isPokemon = true;
      eventType = "RockPokemon";
      nearbyMessage = "You hear some rocks rolling around.";
      encounterMessage = "You encountered a rock pokemon!";
      catchRate = 75;
}

void RockPokemon::printX() {
      cout << "\033[1;33m";
      cout << "R";
      cout << "\033[0m";
}

void RockPokemon::event(Trainer *trainer) {

}
                                                                                                                                                                                                                                                                                                                                             