#include "Board.h"
//#include

// CONSTRUCTOR
Board::Board() {
      grass = 0;
      pokestop = false;
      cave = false;
      prof = false;
      geodude = false;
      onix = false;
      charizard = false;
      rayquaza = false;
      mewtwo = false;
      espeon = false;
};

// DESTUCTOR
Board::~Board() {
      for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                  delete tiles[y][x];
            }
            delete [] tiles[y];
      }
      delete [] tiles;
      tiles = NULL;
};

// COPY CONSTRUCTOR
Board::Board(const Board & other) {
		// numCreatures = other.numCreatures;
		// tiles = new Creature*[numCreatures];;
		// for (int i = 0; i < numCreatures; i++)
		// 	tiles[i] = other.tiles[i];
            cols = other.cols;
            rows = other.rows;
            for (int y = 0; y < rows; y++) {
                  for (int x = 0; x < cols; x++) {
                        tiles[y][x] = other.tiles[y][x];
                  }
            }
}

// ASSIGNMENT OPERATOR OVERLOAD
void Board::operator=(const Board & other) {
	if (rows or cols) // if there are objects in the array
		delete [] tiles; // delete array

	// copy constructor
      cols = other.cols;
      rows = other.rows;
      for (int y = 0; y < rows; y++) {
            for (int x = 0; x < cols; x++) {
                  tiles[y][x] = other.tiles[y][x];
            }
      }
}

Tile* Board::getEvent(int eventNum) {
      Tile* eventTile;
      switch (eventNum) {
            case 1: eventTile = new Prof; prof = true; break;
            case 2: eventTile = new Grass; grass--; break;
            case 3: eventTile = new Pokestop; pokestop = true; break;
            case 4: eventTile = new Cave; cave = true; break;
            case 5: eventTile = new Geodude; geodude = true; break;
            case 6: eventTile = new Onix; onix = true; break;
            case 7: eventTile = new Charizard; charizard = true; break;
            case 8: eventTile = new Rayquaza; rayquaza = true; break;
            case 9: eventTile = new Mewtwo; mewtwo = true; break;
            case 10: eventTile = new Espeon; espeon = true; break;
      }
      //cout << "event created: " << eventTile->getEventType() << endl;
      return eventTile;
}

void Board::setupBoard(int x, int y, Trainer *trainer) {
      srand (time(NULL));
      int randNum = rand() % 10 + 1; // random num between 1 and 10
      rows = x;
      cols = y;
      int count = 0;
      grass = rows * cols - 9;
      tiles = new Tile**[rows];
      for (int i = 0; i < rows; i++) {
            tiles[i] = new Tile*[cols];
            for (int j = 0; j < cols; j++) {
                  randNum = rand() % 10 + 1;
                  while (checkTileAvaliability(randNum) == false) {
                        randNum = rand() % 10 + 1; // random num between 1 and 10
                        //cout << "randNum: "<< randNum << endl;
                  }
                  //cout << "Loop complete\n " << endl;
                  // assignTileType(tiles[i][j], randNum);
                  //tiles[i][j] = new Pokestop;
                  tiles[i][j] = getEvent(randNum);
                  if (randNum == 1)
                        trainer->setLocation(j, i);
                  //tiles[y][x]->setTileNumber(count);
                  count++;
            }
      }
}

bool Board::checkTileAvaliability(int num) {
      //cout << "checkNum: " << num << endl;
      if ((num == 1) and (prof == true)) {
            return false;
      }
      else if ((num == 2) and (grass <= 0)) {
            return false;
      }
      else if ((num == 3) and (pokestop == true)) {
            return false;
      }
      else if ((num == 4) and (cave == true)) {
            return false;
      }
      else if ((num == 5) and (geodude == true)) {
            return false;
      }
      else if ((num == 6) and (onix == true)) {
            return false;
      }
      else if ((num == 7) and (charizard == true)) {
            return false;
      }
      else if ((num == 8) and (rayquaza == true)) {
            return false;
      }
      else if ((num == 9) and (mewtwo == true)) {
            return false;
      }
      else if ((num == 10) and (espeon == true)) {
            return false;
      }
      return true;
}

void Board::assignTileType(Tile *tile, int num) {
      tile = new Pokestop;
      // if (num == 1) {
      //       tile = new Pokestop;
      //       pokestop = true;
      // }
      // else if (num == 2) {
      //       tile = new Cave;
      //       cave = true;
      // }
      // else if (num == 3) {
      //       tile = new FlyingPokemon;
      //       psychicPokemon = true;
      // }
      // else if (num == 4) {
      //       tile = new FlyingPokemon;
      //       psychicPokemon2 = true;
      // }
      // else if (num == 5) {
      //       tile = new PsychicPokemon;
      //       psychicPokemon = true;
      // }
      // else if (num == 6) {
      //       tile = new PsychicPokemon;
      //       psychicPokemon2 = true;
      // }
      // else if (num == 7) {
      //       tile = new RockPokemon;
      //       rockPockemon = true;
      // }
      // else if (num == 8) {
      //       tile = new RockPokemon;
      //       rockPockemon2 = true;
      // }
      // else if (num == 9) {
      //       tile = new Prof;
      //       prof = true;
      // }
      // else if (num == 10) {
      //       tile = new Grass;
      //       grass--;
      // }
}

void Board::displayBoard(int trainerLocationX, int trainerLocationY) {
      int count = 0;
      cout << "\n\n";
      for (int y = 0; y < rows; y++) {
            cout << "\t";
            for (int x = 0; x < cols; x++) {
                  cout << "   ";
                  if ((x == trainerLocationX) and (y == trainerLocationY))
                        cout << "X";
                  else
                        tiles[y][x]->printX();
            }
            cout << "\n\n";
      }
      cout << "\n\n\n\n";
}

void Board::swapTiles(Tile **a, Tile **b) {
      Tile *temp;
      temp = *a;
      *a = *b;
      *b = temp;
};

void Board::activateTile(Trainer* trainer) {
      cout << tiles[trainer->getLocationY()][trainer->getLocationX()]->getEncounterMessage() << endl;
      tiles[trainer->getLocationY()][trainer->getLocationX()]->event(trainer);
      if ((rows != 3) and (cols !=3)) {
            if (tiles[trainer->getLocationY()][trainer->getLocationX()]->checkPokemon() == true) {
                  srand (time(NULL));
                  int newLocX = rand() % rows;
                  int newLocY = rand() % cols;
                  while (tiles[newLocY][newLocX]->getEventType() != "Grass") {
                        newLocX = rand() % rows;
                        newLocY = rand() % cols;
                  }
                  swapTiles(&(tiles[trainer->getLocationY()][trainer->getLocationX()]), &tiles[newLocY][newLocX]);
            }
      }
}

void Board::displayNearbyEvents(int locX, int locY) {
      nearbyEventN(locX, (locY - 1));
      nearbyEventS(locX, (locY + 1));
      nearbyEventE((locX + 1), locY);
      nearbyEventW((locX - 1), locY);
}

/*********************************************************************
** Function: nearbyEvent____
** Description: Functions that change the player's location on the map.
** Parameters: none
** Pre-Conditions: cannot move in direction if at edge of map
** Post-Conditions: none
** Return: change player tileX or tileY
*********************************************************************/
void Board::nearbyEventN(int tileX, int tileY) { // ^
      if (tileY != -1) {
            //cout << "Event North." << endl;
            cout << tiles[tileY][tileX]->getNearbyMessage() << endl;
      }
}
void Board::nearbyEventS(int tileX, int tileY) { // v
      if (tileY != cols) {
            //cout << "Event South." << endl;
            cout << tiles[tileY][tileX]->getNearbyMessage() << endl;
      }
}
void Board::nearbyEventE(int tileX, int tileY) { // ->
      if (tileX != rows) {
            //cout << "Event East." << endl;
            cout << tiles[tileY][tileX]->getNearbyMessage() << endl;
      }
}
void Board::nearbyEventW(int tileX, int tileY) { // <-
      if (tileX != -1) {
            //cout << "Event West." << endl;
            cout << tiles[tileY][tileX]->getNearbyMessage() << endl;
      }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        