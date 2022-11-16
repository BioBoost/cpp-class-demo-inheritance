#include "circle.h"
#include <cmath>
#include <sstream>

namespace Shapes {

  Circle::Circle(double radius) {
    this->radius(radius);
  }

  double Circle::radius(void) {
    return _radius;
  }

  void Circle::radius(double radius) {
    _radius = abs(radius);
  }

  double Circle::area(void) {
    return M_PI * radius() * radius();
  }
  
  double Circle::circumference(void) {
    return 2 * M_PI * radius();
  }

  std::string Circle::to_string(void) {
    return "Circle " + Shape::to_string();
  }

};