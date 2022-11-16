#pragma once

#include "point.h"
#include <string>
#include "shape.h"

namespace Shapes {

  class IsoscelesTriangle : public Shape {

    public:
      IsoscelesTriangle(double base, double height);

    public:
      double base(void);
      void base(double base);
      double height(void);
      void height(double height);

    public:
      double area(void);
      double circumference(void);

    public:
      std::string to_string(void);

    private:
      double _base = 0;
      double _height = 0;

  };

};