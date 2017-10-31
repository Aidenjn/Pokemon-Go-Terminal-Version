#include "Rayquaza.h"

Rayquaza::Rayquaza() {
      //cout << "Rayquaza created!" << endl;
      encounterMessage = "You encountered have ecountered a wild Rayquaza!";
}

void Rayquaza::event(Trainer *trainer) {
      srand (time(NULL));
      int randInt = rand() % 100 + 1; // random number between 1 and 100
      cout << "You throw your pokeball..." << endl;
      if (randInt < catchRate) {
            cout << "You caught a Rayquaza!" << endl;
            trainer->catchPokemon(3);
      }
      else {
            cout << "The wild Rayquaza ran away." << endl;
      }
}
