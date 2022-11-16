#pragma once

#include "point.h"
#include <string>
#include "shape.h"

namespace Shapes {

  class Circle : public Shape {

    public:
      Circle(double radius);

    public:
      double radius(void);
      void radius(double radius);

    public:
      double area(void);
      double circumference(void);

    public:
      std::string to_string(void);

    private:
      double _radius = 0;

  };

};