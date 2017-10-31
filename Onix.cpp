#include "Onix.h"

Onix::Onix() {
      //cout << "Onix created!" << endl;
      encounterMessage = "You encountered have ecountered a wild Onix!";
}

void Onix::event(Trainer *trainer) {
      srand (time(NULL));
      int randInt = rand() % 100 + 1; // random number between 1 and 100
      cout << "You throw your pokeball..." << endl;
      if (randInt < catchRate) {
            cout << "You caught an Onix!" << endl;
            trainer->catchPokemon(1);
      }
      else {
            cout << "The wild Onix ran away." << endl;
      }
}
