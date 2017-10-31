#include "Geodude.h"

Geodude::Geodude() {
      //cout << "Geodude created!" << endl;
      encounterMessage = "You encountered have ecountered a wild Geodude!";
}

void Geodude::event(Trainer *trainer) {
      srand (time(NULL));
      int randInt = rand() % 100 + 1; // random number between 1 and 100
      cout << "You throw your pokeball..." << endl;
      if (randInt < catchRate) {
            cout << "You caught a Geodude!" << endl;
            trainer->catchPokemon(0);
      }
      else {
            cout << "The wild Geodude ran away." << endl;
      }
}
