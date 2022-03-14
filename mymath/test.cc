#include "mymath.h"
#include <assert.h>
#include <cmath>
#include <stdio.h>

bool almost_equal(double x, double y) { return std::fabs(x - y) <= EPS; }

int main() {
  assert(almost_equal(1.0, mysqrt(1.0)));
  assert(almost_equal(1.4142135623730951, mysqrt(2.0)));

  return 0;
}
