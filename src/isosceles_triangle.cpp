#include "isosceles_triangle.h"
#include <cmath>
#include <sstream>

namespace Shapes {

  IsoscelesTriangle::IsoscelesTriangle(double base, double height) {
    this->base(base);
    this->height(height);
  }

  double IsoscelesTriangle::base(void) {
    return _base;
  }

  void IsoscelesTriangle::base(double base) {
    _base = abs(base);
  }

  double IsoscelesTriangle::height(void) {
    return _height;
  }

  void IsoscelesTriangle::height(double height) {
    _height = height;
  }

  double IsoscelesTriangle::area(void) {
    return (base() * height()) / 2;
  }

  double IsoscelesTriangle::circumference(void) {
    double a = base() / 2;
    double c = sqrt(a * a + height() * height());

    return base() + 2 * c;
  }

  std::string IsoscelesTriangle::to_string(void) {
    return "Isosceles Triangle" + Shape::to_string();
  }

};