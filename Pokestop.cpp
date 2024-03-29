//#pragma once
#include "Pokestop.h"

using namespace std;

Pokestop::Pokestop() {
      eventType = "Pokestop";
      nearbyMessage = "You see a pokestop off in the distance.";
      encounterMessage = "You arrived at a pokestop!\nFive pokeballs were added to you inventory.";
}

void Pokestop::printX() {
      cout << "\033[1;31m";
      cout << "P";
      cout << "\033[0m";
}

void Pokestop::event(Trainer *trainer) {
      //cout << encounterMessage << endl;
      trainer->addPokeballs(5);
      cout << "Pokeballs: " << trainer->getPokeballs() << endl;
}
                                                         
