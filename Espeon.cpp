#include "Espeon.h"

Espeon::Espeon() {
      //cout << "Espeon created!" << endl;
      encounterMessage = "You encountered have ecountered a wild Espeon!";
}

void Espeon::event(Trainer *trainer) {
      srand (time(NULL));
      int randInt = rand() % 100 + 1; // random number between 1 and 100
      cout << "You throw your pokeball..." << endl;
      if (randInt < catchRate) {
            cout << "You caught an Espeon!" << endl;
            trainer->catchPokemon(5);
      }
      else {
            cout << "The wild Espeon ran away." << endl;
      }
}
