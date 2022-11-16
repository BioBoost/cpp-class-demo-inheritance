#pragma once

#include "point.h"
#include <string>

namespace Shapes {

  class Shape {

    public:
      Point origin(void) const;
      void origin(Point origin);
    
    public:
    // Here we define the methods (area() and circumference()) that need to be
    // implemented by the sub-classes
    // This makes the class abstract !

      virtual double area(void) const = 0;      // No implementation !
          // virtual = allow overriding + polymorphism
      virtual double circumference(void) const = 0;

    public:
      // to_string provides default implementation
      virtual std::string to_string(void) const;

    private:
      Point _origin;

  };

};