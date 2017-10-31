#include "Tile.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "Pokestop.h"
#include "Prof.h"
#include "Grass.h"
#include "Cave.h"
#include "Geodude.h"
#include "Onix.h"
#include "Charizard.h"
#include "Rayquaza.h"
#include "Mewtwo.h"
#include "Espeon.h"
// #include "FlyingPokemon.h"
// #include "RockPokemon.h"
// #include "PsychicPokemon.h"

class Board {
private:
      int rows;
      int cols;
      Tile ***tiles;

      int grass;
      bool pokestop;
      bool cave;
      bool prof;
      bool geodude;
      bool onix;
      bool charizard;
      bool rayquaza;
      bool mewtwo;
      bool espeon;

public:
      //BIG THREE
      ~Board();
      Board();
      Board(const Board &);
      void operator=(const Board &);

      //OTHER FUNTIONS
      void setupBoard(int, int, Trainer*);
      void displayBoard(int, int);
      bool checkTileAvaliability(int);
      void assignTileType(Tile*, int);
      Tile* getEvent(int);
      void swapTiles(Tile**, Tile**);
      void activateTile(Trainer*);
      void displayNearbyEvents(int, int);
      void nearbyEventN(int, int);
      void nearbyEventS(int, int);
      void nearbyEventE(int, int);
      void nearbyEventW(int, int);
      // template <class T>
      // T getEvent(int x) {
      //   T eventTile;
      //   switch (x) {
      //         case 1: eventTile = new Pokestop; break;
      //   }
      //   return (eventTile);
      // }

};
