#pragma once

#include "point.h"
#include <string>

namespace Shapes {

  class Shape {

    public:
      Point origin(void);
      void origin(Point origin);
    
    public:
    // Here we define the methods that need to be
    // implemented by the sub-classes
    // This makes the class abstract !

      virtual double area(void) = 0;      // No implementation
          // virtual = allow overriding + polymorphism
      virtual double circumference(void) = 0;

    public:
      // to_string provides default implementation
      virtual std::string to_string(void);

    private:
      Point _origin;

  };

};