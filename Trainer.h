#pragma once
#include "Pokemon.h"

class Trainer {
private:
      Pokemon pokemon[6];
      bool readyForVictory;
      int pokeballs;
      int locationX;
      int locationY;
public:
      Trainer();

      //SETTERS
      void setLocation(int, int);
      void setEvolveReqs();
      void checkReadyForVictory();

      //GETTERS
      int getLocationX();
      int getLocationY();
      int getPokeballs();
      bool getReadyForVictory();

      //MODIFIERS
      void addPokeballs(int);
      void megastoneEvolution();

      //OTHER FUNCTIONS
      void catchPokemon(int);
      void displayLocation();
      void displayInventory();
      void moveUp(); // ^
      void moveDown(int); // v
      void moveRight(int); // ->
      void moveLeft(); // <-
};
      
  