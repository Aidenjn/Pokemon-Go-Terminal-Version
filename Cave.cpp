#include "Cave.h"

using namespace std;

Cave::Cave() {
      eventType = "Cave";
      nearbyMessage = "You feel a cold draft coming from a dank opening in the nearby cliff.";
      encounterMessage = "You found some cool stones in this cave!\nAll of your stage 1 pokemon have been evolved to stage 2.";
}

void Cave::printX() {
      cout << "\033[1;34m";
      cout << "C";
      cout << "\033[0m";
}

void Cave::event(Trainer *trainer) {
      trainer->megastoneEvolution();
}
