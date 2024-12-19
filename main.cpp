//Programmer: Sophia Bhoria
//Date: 9/26/2024
//Purpose: The purpose of this code is to compute the area of a circle, the area of a rectangle, and the volume of a cylinder using function overloading and default arguments in C++.

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1416;  // Constant variable for PI

// Function to compute the area of a circle
double computeArea(const double radius) {
  return PI * radius * radius;
}

// Function to compute the area of a rectangle
double computeArea(const double length, const double width) {
  return length * width;
}

// Function to compute the volume of a cylinder with default arguments
double computeVolume(const double radius = 5.0, const double height = 10.0) {
  return PI * radius * radius * height;
}

int main() {
  double radius;
  double length;
  double width;
  double height;

  // Compute area of a circle
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  cout << "Area of the circle: " << fixed << setprecision(2) << computeArea(radius) << endl;

  // Compute area of a rectangle
  cout << "Enter the length and width of the rectangle: ";
  cin >> length >> width;
  cout << "Area of the rectangle: " << fixed << setprecision(2) << computeArea(length, width) << endl;

  // Compute volume of the cylinder using default arguments
  cout << "Volume of the cylinder with default radius (5.0) and height (10.0): " << fixed << setprecision(2) << computeVolume() << endl;

  // Compute volume of the cylinder with user input for radius
  cout << "Enter the radius of the cylinder: ";
  cin >> radius;
  cout << "Volume of the cylinder with radius " << radius << " and default height: " << fixed << setprecision(2) << computeVolume(radius) << endl;

  // Compute volume of the cylinder with user input for height
  cout << "Enter the height of the cylinder: ";
  cin >> height;
  cout << "Volume of the cylinder with default radius (5.0) and height " << height << ": " << fixed << setprecision(2) << computeVolume(5.0, height) << endl;

  return 0;
}
