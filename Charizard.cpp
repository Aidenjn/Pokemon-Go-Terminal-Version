#include "Charizard.h"

Charizard::Charizard() {
      //cout << "Charizard created!" << endl;
      encounterMessage = "You encountered have ecountered a wild Charizard!";
}

void Charizard::event(Trainer *trainer) {
      srand (time(NULL));
      int randInt = rand() % 100 + 1; // random number between 1 and 100
      cout << "You throw your pokeball..." << endl;
      if (randInt < catchRate) {
            cout << "You caught a Charizard!" << endl;
            trainer->catchPokemon(2);
      }
      else {
            cout << "The wild Charizard ran away." << endl;
      }
}
