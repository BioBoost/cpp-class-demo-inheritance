#pragma once

#include "point.h"
#include <string>
#include "shape.h"

namespace Shapes {

  class Square : public Shape {

    public:
      Square(double side);

    public:
      double side(void) const;
      void side(double side);

    public:
      double area(void) const;
      double circumference(void) const;

    public:
      std::string to_string(void) const;

    private:
      double _side = 0;

  };

};