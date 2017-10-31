#include "Pokemon.h"

Pokemon::Pokemon() {
      stage = 0;
      name = "unknownName";
      type = "unknownType";
      amountCaptured = 0;
}

//SETTERS
void Pokemon::setName(string newName) {
      name = newName;
}
void Pokemon::setType(string newType) {
      type = newType;
}
void Pokemon::setEvolveReq(int newReq) {
      evolveReq = newReq;
}

//MODIFIERS
void Pokemon::addCapture() {
      amountCaptured++;
      if (amountCaptured == evolveReq) {
            stage++;
            cout << "Your " << name << " has evolved!" << endl;
      }
}
void Pokemon::evolveStage() {
      stage++;
}

//GETTERS
int Pokemon::getStage() {
      return stage;
}
string Pokemon::getName() {
      return name;
}
string Pokemon::getType() {
      return type;
}
int Pokemon::getAmountCaptured() {
      return amountCaptured;
}
int Pokemon::getEvolveReq() {
      return evolveReq;
}

/*********************************************************************
** Function: displayStats
** Description: Displays the members of the pokemon.
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: cout
** Return: Display of class members
*********************************************************************/
void Pokemon::displayStats() {
      cout << "Pokemon: " << name << endl;
      cout << "Type: " << type << endl;
      cout << "Evolution Stage: " << stage << endl;
      cout << "Amount Captured: " << amountCaptured << endl;
}
