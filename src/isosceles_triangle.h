#pragma once

#include "point.h"
#include <string>
#include "shape.h"

namespace Shapes {

  class IsoscelesTriangle : public Shape {

    public:
      IsoscelesTriangle(double base, double height);

    public:
      double base(void) const;
      void base(double base);
      double height(void) const;
      void height(double height);

    public:
      double area(void) const;
      double circumference(void) const;

    public:
      std::string to_string(void) const;

    private:
      double _base = 0;
      double _height = 0;

  };

};