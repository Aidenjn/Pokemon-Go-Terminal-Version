#include "Trainer.h"
#include "Board.h"

class World {
private:
      Trainer trainer;
      Board board;
      int worldSizeX;
      int worldSizeY;
public:
      void setupWorld(int, int);
      void movePlayer(char);
      void playerEffect();
      void displayInterface();
      void displayOptions();
      bool checkVictory();
};
