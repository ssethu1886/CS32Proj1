// zion_solution.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "globals.h"
#include "Player.h"
#include "Arena.h"
#include "Game.h"
#include "Previous.h"

using namespace std;


class Arena;  // This is needed to let the compiler know that Arena is a
              // type name, since it's mentioned in the Robot declaration.

///////////////////////////////////////////////////////////////////////////
//  main()
///////////////////////////////////////////////////////////////////////////

int main()
{
      // Initialize the random number generator.  (You don't need to
      // understand how this works.)
    srand(static_cast<unsigned int>(time(0)));

      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 3, 2);
    Game g(15, 18, 80);

      // Play the game
    g.play();

}


