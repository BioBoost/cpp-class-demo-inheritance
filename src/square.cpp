#include "square.h"
#include <cmath>
#include <sstream>

namespace Shapes {

  Square::Square(double side) {
    this->side(side);
  }

  double Square::side(void) {
    return _side;
  }

  void Square::side(double side) {
    _side = abs(side);
  }

  double Square::area(void) {
    return side() * side();
  }
  
  double Square::circumference(void) {
    return 4 * side();
  }

  std::string Square::to_string(void) {
    return "Square " + Shape::to_string();
  }

};