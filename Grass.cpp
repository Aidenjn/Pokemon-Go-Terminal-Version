//#pragma once
#include "Grass.h"

using namespace std;

Grass::Grass() {
      eventType = "Grass";
      nearbyMessage = "There is some grass nearby.";
      encounterMessage = "You are standing in a field of grass.\nNothing special here.";
}

void Grass::printX() {
      cout << "\033[1;32m";
      cout << "G";
      cout << "\033[0m";
}

void Grass::event(Trainer *trainer) {

}
