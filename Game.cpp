
      /*#######.
     ########",#:
   #########',##".
  ##'##'##".##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

#include <iostream>
#include "Game.hpp"

Game::Game() :
  _world(*(new World()))
{
  std::cout << "Welcome to the Game !" << std::endl;
}

Game::Game(const Game& game) :
  _world(*(new World()))
{
  *this = game;
}

Game::~Game() {

}

Game& Game::operator=(const Game& game) {
  (void)game;
  
  return *this;
}


void  Game::draw() {

}

void  Game::refreshPhysics() {

}
