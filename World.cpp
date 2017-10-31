#include "World.h"

/*********************************************************************
** Function: setup world
** Description: sets up the world
** Parameters: x, y
** Pre-Conditions: int, int
** Post-Conditions: none
** Return: none
*********************************************************************/
void World::setupWorld(int x, int y) {
      board.setupBoard(x, y, &trainer);
      //board.displayBoard();
      trainer.displayLocation();
      worldSizeX = x;
      worldSizeY = y;
}

/*********************************************************************
** Function: displayOptions
** Description: displays interface of options the user can make
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: displays text
*********************************************************************/
void World::displayOptions() {
      cout << "     \033[1;32m OPTIONS \033[0m" << endl;
      cout << "–––––––––––––––––––––" << endl;
      cout << "  o: Display options\n\n" << endl;
      cout << "  w: Move North\n" << endl;
      cout << "  a: Move East\n" << endl;
      cout << "  s: Move South\n" << endl;
      cout << "  d: Move West\n\n" << endl;
      cout << "  f: Interact with location\n" << endl;
      cout << "  i: Display inventory\n" << endl;
      cout << "\n\n";
}

/*********************************************************************
** Function: movePlayer
** Description: activates the correct function corresponding to the char recieved
** Parameters: move
** Pre-Conditions: char
** Post-Conditions: none
** Return: activates corresponding function
*********************************************************************/
void World::movePlayer(char move) {
      if (move == 'w')
            trainer.moveUp();
      else if (move == 's')
            trainer.moveDown(worldSizeY - 1);
      else if (move == 'a')
            trainer.moveLeft();
      else if (move == 'd')
            trainer.moveRight(worldSizeX - 1);
      else if (move == 'f') {
            //cout << "ACTION" << endl;
            board.activateTile(&trainer);
      }
      else if (move == 'i')
            trainer.displayInventory();
      else
            displayOptions();
}

void World::playerEffect() {

}

/*********************************************************************
** Function: checkVictory
** Description: checks if the player has won
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: bool
** Return: if the game is won
*********************************************************************/
bool World::checkVictory() {
      if (trainer.getReadyForVictory() == true)
            return true;
}

/*********************************************************************
** Function: displayInterface
** Description: displays the useful information to the player about where they are
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: displays information
*********************************************************************/
void World::displayInterface() {
      board.displayNearbyEvents(trainer.getLocationX(), trainer.getLocationY());
      #ifdef DEBUG
            board.displayBoard(trainer.getLocationX(), trainer.getLocationY());
            trainer.displayLocation();
      #endif
}
