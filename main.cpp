#include "order.h"
#include "kitepp.hpp"
#include <iostream>

constexpr double DEFAULTDOUBLE = std::numeric_limits<double>::quiet_NaN();

int main(int argc, const char **argv)
{
  std::cout << "isValid for default double :" << kiteconnect::isValid(DEFAULTDOUBLE) << std::endl;
  std::cout << "isValid for 12.5 :" << kiteconnect::isValid(12.5) << std::endl;
  return 0;
}