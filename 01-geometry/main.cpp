#include <iostream>

// Point as a structure
struct Point;
void point_init(Point&, double, double);
double point_x(Point&);
double point_y(Point&);

struct Point {
  double x;
  double y;
};

void point_init(Point& p, double x, double y) {
  p.x = x;
  p.y = y;
}

double point_x(Point& p) {
  return p.x;
}

double point_y(Point& p) {
  return p.y;
}

// Point as a class with functions defined inside the class declaration
class PPoint {
public:
  PPoint(double x, double y) {
    this->x = x;
    this->y = y;
  }
  double getX() {
    return this->x;
  }
  double getY() {
    return this->y;
  }
private:
  double x;
  double y;
};

// Point as a class with interface separated from the implementation
class PPPoint {
public:
  PPPoint(double, double);
  double getX();
  double getY();
private:
  double x;
  double y;
};

PPPoint::PPPoint(double x, double y) {
  this->x = x;
  this->y = y;
}

double PPPoint::getX() {
  return this->x;
}

double PPPoint::getY() {
  return this->y;
}

// Using our point definitions
int main() {
  Point p1;
  point_init(p1, 10, 20);
  std::cout << point_x(p1) << "," << point_y(p1) << std::endl;

  PPoint* p2 = new PPoint(10, 20);
  std::cout << p2->getX() << "," << p2->getY() << std::endl;

  PPPoint* p3 = new PPPoint(10, 20);
  std::cout << p3->getX() << "," << p3->getY() << std::endl;
}

