#include "circle.h"
#include <math.h>

Circle::Circle(void) { }

Circle::Circle(double radius) {
  set_radius(radius);
}

double Circle::get_radius(void) const {
  return radius;
}

void Circle::set_radius(double radius) {
  this->radius = radius;
}

double Circle::area(void) {
  return M_PI * radius * radius;
}

double Circle::circumference(void) {
  return 2 * M_PI * radius;
}