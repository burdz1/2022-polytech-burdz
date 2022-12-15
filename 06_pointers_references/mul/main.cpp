#include <iostream>
#include "functions.h"

int main() 
{
  std::cout << "5 * 5 = "<< mul("5", "5") << std::endl;
  std::cout << "2 * 6 = "<< mul("2", "6") << std::endl;
  std::cout << "10 * 5 = "<< mul("10", "5") << std::endl;
  std::cout << "5 * 0 = "<< mul("5", "0") << std::endl;
  return 0;
}