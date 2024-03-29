/******************************************************
 * ** Program: Pokemango
 * ** Author: Aiden Nelson
 * ** Date: 5/22/2017
 * ** Description: A simplified version of pokemonGo for the console.
 * ******************************************************/
#include "Game.h"
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
      Game game;
      int x, y;
      if (game.checkInputs(argc, argv)) {
            sscanf(argv[1], "%d", &x);
            sscanf(argv[2], "%d", &y);
            //do {
                  if (game.checkInputsSize(x, y)) {
                              game.clearScreen();
                              game.welcome();
                              game.aiPrompt();
                              game.play(x, y);
                              //game.clearScreen();
                              if (game.getVictory() == true)
                                    game.winMessage();
                              else
                                    game.gameOver();
                  }
            //} while(game.replay() == true);
      }
      return 0;
}
                                                                                  
