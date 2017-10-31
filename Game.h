#pragma once
#include <iostream>
#include <string>
#include "World.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <unistd.h>     /* for code execution delay */

class Game {
private:
      bool victory = false;
      bool ai = false;
      World gameWorld;
public:
      //GETTERS
      bool getVictory();
      bool getAi();

      //SETTERS

      //TERMINAL DISPLAY FUNCTIONS
      void const welcome() const; // Welcome message
      void const winMessage() const; // Win message
      void const gameOver() const; // Game Over message
      void const clearScreen() const; // Clear's the console screen

      //OTHER FUNCTIONS
      char getAiChoice();
      void aiPrompt();
      void play(int, int); // Play game
      bool replay(); // Prompts player for replay
      void const promptChoices() const;
      bool checkInputs(int, char**);
      bool checkInputsSize(int, int);

};
