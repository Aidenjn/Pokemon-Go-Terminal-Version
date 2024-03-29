#include "Game.h"

using namespace std;

/*********************************************************************
** Function: clearScreen
** Description: Clears the game screen
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: none
*********************************************************************/
void const Game::clearScreen() const {
	cout << string( 100, '\n' );
}

/*********************************************************************
** Function: welcome
** Description: Displays game title
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: none
*********************************************************************/
void const Game::welcome() const {
	//Font Name: Rounded
      cout << "\033[1;33m";
      cout << "                 ______      _                                         " << endl;
      cout << "                (_____ \\    | |                                        " << endl;
      cout << "                 _____) )__ | |  _ _____ ____  _____ ____   ____  ___  " << endl;
      cout << "                |  ____/ _ \\| |_/ ) ___ |    \\(____ |  _ \\ / _  |/ _ \\ " << endl;
      cout << "                | |   | |_| |  _ (| ____| | | / ___ | | | ( (_| | |_| |" << endl;
      cout << "                |_|    \\___/|_| \\_)_____)_|_|_\\_____|_| |_|\\___ |\\___/ " << endl;
      cout << "                                                          (_____|      " << endl;
      cout << "\033[0m";
      cout << string( 10, '\n' );
}

/*********************************************************************
** Function: winMessage
** Description: Displays message for when player wins the game
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: none
*********************************************************************/
void const Game::winMessage() const {
	//Font Name: Rounded
      cout << "\033[1;32m";
	cout << "                 _     _                _  _  _             _ " << endl;
	cout << "                | |   | |              (_)(_)(_)           | |" << endl;
	cout << "                | |___| | ___  _   _    _  _  _  ___  ____ | |" << endl;
	cout << "                |_____  |/ _ \\| | | |  | || || |/ _ \\|  _ \\|_|" << endl;
	cout << "                 _____| | |_| | |_| |  | || || | |_| | | | |_ " << endl;
	cout << "                (_______|\\___/|____/    \\_____/ \\___/|_| |_|_|" << endl;
      cout << "\033[0m";
      cout << string( 25, '\n' );
}

/*********************************************************************
** Function: gameOver
** Description: Displays GAME OVER in bright flashy letters
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: none
*********************************************************************/
void const Game::gameOver() const {
      cout << "\033[1;31m";
      cout << "                _______                      _______                   " << endl;
      cout << "               (_______)                    (_______)                  " << endl;
      cout << "               _   ___ _____ ____  _____    _     _ _   _ _____  ____  " << endl;
      cout << "               | | (_  (____ |    \\| ___ |  | |   | | | | | ___ |/ ___)" << endl;
      cout << "               | |___) / ___ | | | | ____|  | |___| |\\ V /| ____| |    " << endl;
      cout << "                \\_____/\\_____|_|_|_|_____)   \\_____/  \\_/ |_____)_|     " << endl;
      cout << "\033[0m";
	cout << string( 25, '\n' );
}

/*********************************************************************
** Function: replay
** Description: Asks player if they would like to play again.
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: bool
** Return: true or false
*********************************************************************/
bool Game::replay() {
      string response;
      cout << "Would you like to play again?" << endl;
      cout << "Type y/n : ";
      cin >> response;
      if (response == "y")
            return true;
      cout << "Thanks for playing!" << endl;
      return false;
}

/*********************************************************************
 * ** Function: checkInputs
 * ** Description: checks the arguments supplied to make sure they are correct inputs
 * ** Parameters: amount of arguments - argc, arguments - argv
 * ** Pre-Conditions: int, **char
 * ** Post-Conditions: none
 * ** Return: none
 * *********************************************************************/
bool Game::checkInputs(int argc, char *argv[]) {
	if (argc < 3) {
		cout << "There are too few arguments!" << endl;
		cout << "Please include the height and width of the map." << endl;
		return false;
	}
	else if (argc > 3) {
		cout << "There are too many arguments!" << endl;
		cout << "Please include only the height and width of the map." << endl;
		return false;
	}
	return true;
}

/*********************************************************************
 * ** Function: checkInputsSize
 * ** Description: checks the arguments supplied to make sure they are correct size inputs
 * ** Parameters: x, y
 * ** Pre-Conditions: int, int
 * ** Post-Conditions: bool
 * ** Return: Are both inputs greater than 3?
 * *********************************************************************/
bool Game::checkInputsSize(int x, int y) {
	if ((x < 3) or (y < 3)) {
		cout << "You cannot have a map less than 3 by 3." << endl;
		return false;
	}
	return true;
}

/*********************************************************************
** Function: play
** Description: Main gameplay function.
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
** Return: none
*********************************************************************/
void Game::play(int x, int y) {
	char move;
	gameWorld.setupWorld(x, y);
	while(1) {
		if (gameWorld.checkVictory() == true) {
			victory = true;
			goto quit;
		}
		gameWorld.displayInterface();
		cout << "What would you like to do? (type \"o\" for options)\nEnter action: ";
		if (ai == false)
			cin >> move;
		else
			move = getAiChoice();
		clearScreen();
		if (move == 'q') {
			goto quit;
		}
		gameWorld.movePlayer(move);
	}
      quit: ;
             }

/*********************************************************************
** Function: aiPrompt
** Description: Prompts user if they would like an AI to play or not.
** Parameters: none
** Pre-Conditions: int
** Post-Conditions: bool
** Return: ai is on or off
*********************************************************************/
void Game::aiPrompt() {
	int choice;
	cout << "Would you like an AI to play for you? Type 1 for yes, or 2 for no." << endl;
	cin >> choice;
	if (choice == 1) {
		ai = true;
	}
	else {
		ai = false;
	}
}

/*********************************************************************
** Function: getAiChoice
** Description: Returns the Ai's choice of action
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: char
** Return: ai's option
*********************************************************************/
char Game::getAiChoice() {
	sleep(2);
  	srand (time(NULL));
  	int randNum = rand() % 6 + 1; /* generate secret number between 1 and 6: */
	char randChar;
	switch (randNum) {
		case 1: return 'w'; break;
		case 2: return 'a'; break;
		case 3: return 's'; break;
		case 4: return 'd'; break;
		case 5: return 'f'; break;
		case 6: return 'f'; break;
	}

}

//GETTERS
bool Game::getVictory() {
	return victory;
}
bool Game::getAi() {
	return ai;
}
      