#include "shape.h"
#include <sstream>

namespace Shapes {

  Point Shape::origin(void) {
    return _origin;
  }

  void Shape::origin(Point origin) {
    _origin = origin;
  }

  std::string Shape::to_string(void) {
    std::stringstream ss;
    
    ss << "Shape (" << origin().x << ", " << origin().y
      << ") has an area of " << area()
      << " and a circumference of " << circumference();

    return ss.str();
  }

};