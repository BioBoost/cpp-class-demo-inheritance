#pragma once

#include "point.h"
#include <string>
#include "shape.h"

namespace Shapes {

  class Circle : public Shape {

    public:
      Circle(double radius);

    public:
      double radius(void) const;
      void radius(double radius);

    public:
      double area(void) const;
      double circumference(void) const;

    public:
      std::string to_string(void) const;

    private:
      double _radius = 0;

  };

};