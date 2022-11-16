// make && ./bin/shapes

#include <iostream>
#include "circle.h"
#include "square.h"
#include "isosceles_triangle.h"
#include <vector>

using namespace std;
using namespace Shapes;


int main() {
  cout << "Shapes demo" << endl;

  // Cannot create object of shape ! Class is abstract
  // Shape shape;

  // We can create objects of circle
  Circle circle(3);

  // We can create pointer of Shape to a circle object
  Shape * shape = &circle;

  // We can call methods defined in shape on shape
  cout << shape->to_string() << endl;

  // Let's see some polymorphism
  std::vector<Shape *> shapes;

  shapes.push_back(new Circle(3));
  shapes.push_back(new Circle(5));
  shapes.push_back(new Circle(32));
  shapes.push_back(new Square(5));
  shapes.push_back(new Square(12));
  shapes.push_back(new IsoscelesTriangle(6, 4));
  shapes.push_back(new IsoscelesTriangle(3, 8));
  shapes.push_back(new Circle(11));

  for (auto &&shape : shapes)
  {
    cout << shape->to_string() << endl;
  }
  
  return 0;
}