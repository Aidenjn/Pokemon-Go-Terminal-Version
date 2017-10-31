#pragma once
#include "PsychicPokemon.h"

using namespace std;

PsychicPokemon::PsychicPokemon() {
      isPokemon = true;
      eventType = "PsychicPokemon";
      nearbyMessage = "Your head starts to feel funny.";
      encounterMessage = "You encountered a psychic pokemon!";
      catchRate = 25;
}

void PsychicPokemon::printX() {
      cout << "\033[1;35m";
      cout << "P";
      cout << "\033[0m";
}

void PsychicPokemon::event(Trainer *trainer) {

}
