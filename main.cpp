#include <iostream>
#include <cmath>

int main() {
  double a1 = 0.0637;
  double b1 = 0.0775;
  double c1 = 0.101;
  double a2 = 0.0463;
  double b2 = 0.0692;
  double c2 = 0.0853;
  double h = 0.2147;

  double p1 = (a1 + b1 + c1) / 2;
  double p2 = (a2 + b2 + c2) / 2;

  double s1 = std::pow(p1 * (p1 - a1) * (p1 - b1) * (p1 - c1), 0.5);
  double s2 = std::pow(p2 * (p2 - a2) * (p2 - b2) * (p2 - c2), 0.5);

  double E = (h * (s1 + 2 * std::pow(s1 * s2, 0.5) + 3 * s2)) / (4 * (s1 + std::pow(s1 * s2, 0.5) + s2));

  std::cout << E;
  return 0;
}