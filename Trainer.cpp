#include "Trainer.h"

/*********************************************************************
** Function: Trainer constructor
** Description: Sets up pokemon array and other members
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: none
*********************************************************************/
Trainer::Trainer() {
      //Geodude
      pokemon[0].setName("Geodude");
      pokemon[0].setType("rock");
      //Onix
      pokemon[1].setName("Onix");
      pokemon[1].setType("rock");
      //Charizard
      pokemon[2].setName("Charizard");
      pokemon[2].setType("flying");
      //Rayquaza
      pokemon[3].setName("Rayquaza");
      pokemon[3].setType("flying");
      //Mewtwo
      pokemon[4].setName("Mewtwo");
      pokemon[4].setType("psychic");
      //Espeon
      pokemon[5].setName("Espeon");
      pokemon[5].setType("psychic");

      setEvolveReqs();
      pokeballs = 5;
      readyForVictory = false;
}

void Trainer::displayLocation() {
      cout << "LocationX: " << locationX << endl;
      cout << "LocationY: " << locationY << endl;
}

//SETTERS
void Trainer::setLocation(int x, int y) {
      locationX = x;
      locationY = y;
}
void Trainer::setEvolveReqs() {
      //Geodude
      pokemon[0].setEvolveReq(2);
      //Onix
      pokemon[1].setEvolveReq(3);
      //Charizard
      pokemon[2].setEvolveReq(2);
      //Rayquaza
      pokemon[3].setEvolveReq(4);
      //Mewtwo
      pokemon[4].setEvolveReq(5);
      //Espeon
      pokemon[5].setEvolveReq(2);

      #ifdef DEBUG
            for (int i = 0; i < 6; i++) {
                  pokemon[i].setEvolveReq(1);
            }
      #endif

}

//GETTERS
int Trainer::getLocationX() {
      return locationX;
}
int Trainer::getLocationY() {
      return locationY;
}
int Trainer::getPokeballs() {
      return pokeballs;
}
bool Trainer::getReadyForVictory() {
      return readyForVictory;
}

//MODIFIERS
void Trainer::addPokeballs(int balls) {
      pokeballs += balls;
}
void Trainer::megastoneEvolution() { //Evolves all stage 1 pokemon to stage 2
      for (int i = 0; i < 6; i++) {
            if (pokemon[i].getStage() == 1) {
                  pokemon[i].evolveStage();
                  //cout << pokemon[i].getStage() << endl;
            }
      }
}

void Trainer::checkReadyForVictory() {
      bool ready = true;
      for (int i = 0; i < 6; i++) {
            if (pokemon[i].getStage() < 2)
                  ready = false;
      }
      if (ready == false) {
            cout << "Not all of your pokemon have evolved to stage 2, come back later." << endl;
      }
      readyForVictory = ready;
}

/*********************************************************************
** Function: catchPokemon
** Description: Adds one to the amount captured of the given pokemon index
** Parameters: int
** Pre-Conditions: Pokemon index(0 - 6)
** Post-Conditions: none
** Return: adds a capture to the particular pokemon in the array.
*********************************************************************/
void Trainer::catchPokemon(int pNum) {
      pokemon[pNum].addCapture();
      //if (pokemon[pNum].getAmountCaptured() >= pokemon[pNum].getEvolveReq())
      pokeballs -= 1;
}

/*********************************************************************
** Function: displayInventory
** Description: displays the player's inventory
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: shows the user their collected items/pokemon
*********************************************************************/
void Trainer::displayInventory() {
      for (int i = 0; i < 6; i++) {
            cout << "  \033[1;36m" << pokemon[i].getName() << "\033[0m" << endl;
            cout << "–––––––––––––––––––––" << endl;
            cout << "  index: " << i << endl;
            cout << "  type: \033[1;32m" << pokemon[i].getType() << "\033[0m" << endl;
            cout << "  evolution stage: " << pokemon[i].getStage() << endl;
            cout << "  amount captured: " << pokemon[i].getAmountCaptured() << endl;
            cout << string( 2, '\n' );
      }

      cout << "\033[1;31m  POKEBALLS: \033[0m" << pokeballs << "\n\n" << endl;
}

// /*********************************************************************
// ** Function: move____
// ** Description: Functions that change the player's location on the map.
// ** Parameters: none
// ** Pre-Conditions: cannot move in direction if at edge of map
// ** Post-Conditions: none
// ** Return: change player locationX or locationY
// *********************************************************************/
void Trainer::moveUp() { // ^
      if (locationY != 0) {
            cout << "You walk towards the North." << endl;
            locationY -= 1;
      }
      else
            cout << "There is a wall!\nYou cannot proceed in that direction." << endl;
}
void Trainer::moveDown(int limit) { // v
      if (locationY != limit) {
            cout << "You walk towards the South." << endl;
            locationY += 1;
      }
      else
            cout << "There is a wall!\nYou cannot proceed in that direction." << endl;
}
void Trainer::moveRight(int limit) { // ->
      if (locationX != limit) {
            cout << "You walk towards the East." << endl;
            locationX += 1;
      }
      else
            cout << "There is a wall!\nYou cannot proceed in that direction." << endl;
}
void Trainer::moveLeft() { // <-
      if (locationX != 0) {
            cout << "You walk towards the West." << endl;
            locationX -= 1;
      }
      else
            cout << "There is a wall!\nYou cannot proceed in that direction." << endl;
}
                                    
 
