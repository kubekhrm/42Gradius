
      /*#######.
     ########",#:
   #########',##".
  ##'##'##".##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

#include "AShip.hpp"

AShip::AShip(int health, int maxHealth, float maxPower, float shootX, float shootY, int color) :
	AGameEntity(),
	_health(health),
	_maxHealth(maxHealth),
	_maxPower(maxPower),
	_shootX(shootX),
	_shootY(shootY)
{
	_color = color;
}

AShip::AShip(const AShip& ship) : AGameEntity(ship) {
  (void)ship;
}

AShip::~AShip() {

}

AShip&    AShip::operator=(const AShip& ship) {
  (void)ship;
  return *this;
}

void      AShip::shoot(float power) {
  (void)power;
}



float     AShip::getShootX() const {
  return _shootX;
}
float     AShip::getShootY() const {
  return _shootY;
}



void      AShip::setShootX(float value) {
  _shootX = value;
}

void      AShip::setShootY(float value) {
  _shootY = value;
}
