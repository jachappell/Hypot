#include <iostream>
#include <complex>

#include "Hypot.h"

using namespace std::complex_literals;

using namespace Storage_B;

int main()
{
  std::cout << "c = " << Hypot(3.0, 4.0) << '\n';
  std::cout << "c = " << Hypot(3.0, 4.0, 0.5) << '\n';
  std::cout << "c = " << Hypot(3.0, 4.0, 12.0) << '\n';

  std::complex<double> z1 = 3.0 + 0.001i;
  std::complex<double> z2 = 4.0 - 0.001i;

  std::cout << "c = " << Hypot(z1, z2) << '\n';

  return 0;
}
