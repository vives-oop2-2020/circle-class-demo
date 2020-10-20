#include <iostream>
#include "circle.h"

using namespace std;

// class Circle {

//   // Getters
//   public:
//     double get_radius(void) const {
//       return radius;
//     }

//   // Attributes
//   private:
//     double radius = 0;
// };

int main() {
  cout << "Hello World" << endl;

  Circle earth;
  // cout << earth.radius << endl;    // radius is private

  earth.set_radius(6371);

  cout << earth.get_radius() << endl;

  cout << "Area: " << earth.area() << endl;
  cout << "Circumference: " << earth.circumference() << endl;

  Circle moon(1737.1);
  cout << "Area moon: " << moon.area() << endl;
  cout << "Circumference moon: " << moon.circumference() << endl;

  return 0;
}