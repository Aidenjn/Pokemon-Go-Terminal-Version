//#pragma once
#include "Prof.h"

using namespace std;

Prof::Prof() {
      eventType = "Prof";
      nearbyMessage = " ";
      encounterMessage = "The proffesor is standing in front of you!";
}

void Prof::printX() {
      //cout << "\033[1;31m";
      cout << "H";
      //cout << "\033[0m";
}

void Prof::event(Trainer *trainer) {
      trainer->checkReadyForVictory();
}
