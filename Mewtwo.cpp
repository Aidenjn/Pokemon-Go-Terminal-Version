#include "Mewtwo.h"

Mewtwo::Mewtwo() {
      //cout << "Mewtwo created!" << endl;
      encounterMessage = "You encountered have ecountered a wild Mewtwo!";
}

void Mewtwo::event(Trainer *trainer) {
      srand (time(NULL));
      int randInt = rand() % 100 + 1; // random number between 1 and 100
      cout << "You throw your pokeball..." << endl;
      if (randInt < catchRate) {
            cout << "You caught a Mewtwo!" << endl;
            trainer->catchPokemon(4);
      }
      else {
            cout << "The wild Mewtwo ran away." << endl;
      }
}
