#include <cassert>
#define _USE_MATH_DEFINES 
#include <cmath>
#include <stdexcept>
#include <iostream>

// TODO: Define class Sphere
class Sphere {
 public:
  // Constructor
    Sphere(float radius):radius_(radius){}

  // Accessors
    float Radius()const {return radius_;}
    float Volume()const{return 4.0/3*M_PI*pow(Radius(),3);}
 private:
  // Private members
    float radius_;
};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
std::cout<<sphere.Volume()<<"\n";
  assert(abs(sphere.Volume() - 523.6) < 1);
}