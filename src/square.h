#pragma once

#include "point.h"
#include <string>
#include "shape.h"

namespace Shapes {

  class Square : public Shape {

    public:
      Square(double side);

    public:
      double side(void);
      void side(double side);

    public:
      double area(void);
      double circumference(void);

    public:
      std::string to_string(void);

    private:
      double _side = 0;

  };

};