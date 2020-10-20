// #ifndef _HEADER_CIRCLE_    // Old Include guard
// #define _HEADER_CIRCLE_

#pragma once    // Include guard

class Circle {

  // Constructors
  public:
    Circle(void);             // Default constructor = NO ARGS
    Circle(double radius);    // Init constructor

  // Getters
  public:
    double get_radius(void) const;

  // Setters
  public:
    void set_radius(double radius);

  // Other methods
  public:
    double area(void);
    double circumference(void);

  // Attributes
  private:
    double radius = 0;
};

// #endif