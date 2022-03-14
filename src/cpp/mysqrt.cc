#include "mymath.h"
#include <cmath>

double mysqrt(double x) {
  double a = x / 2.0;
  do {
    a = (a + x / a) / 2.0;
  } while (std::fabs(x - a * a) > EPS);
  return a;
}
