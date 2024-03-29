#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pokemon {
private:
      int stage;
      string name;
      string type;
      int amountCaptured;
      int evolveReq;
public:
      Pokemon();

      //SETTERS
      void setName(string);
      void setType(string);
      void setEvolveReq(int);

      //MODIFIERS
      void addCapture();
      void evolveStage();

      //GETTERS
      int getStage();
      string getName();
      string getType();
      int getAmountCaptured();
      int getEvolveReq();

      //Other functions
      void displayStats();

};
                                                                                                                                    
