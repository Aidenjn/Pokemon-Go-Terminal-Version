#include "Tile.h"

using namespace std;

Tile::Tile() {
      tileNumber = 0;
      eventType = "Uknown";
      isPokemon = false;
}

//GETTERS
string Tile::getEventType() {
      return eventType;
}
string Tile::getNearbyMessage() {
      return nearbyMessage;
}
string Tile::getEncounterMessage() {
      return encounterMessage;
}
int Tile::getTileNumber() {
      return tileNumber;
}
bool Tile::checkPokemon() {
      return isPokemon;
}

//SETTERS
void Tile::setTileNumber(int num) {
      tileNumber = num;
}

// void Tile::printX() {
//       cout << "X";
//       //cout << "X";
// }
            