#include <iostream>
#include <string>

#include <fmt/format.h>
#include <spdlog/spdlog.h>

void fizzbuzz(int a)
{
  if ((a % 15 == 0)) {
    std::cout << "fizzbuzz" << std::endl;
  } else if (a % 3 == 0) {
    std::cout << "fizz" << std::endl;
  } else if (a % 5 == 0) {
    std::cout << "buzz" << std::endl;
  } else {
    std::cout << a << std::endl;
  }
}

int main()
{
  for (int i = 1; i <= 15; i++) {
    fizzbuzz(i);
  }
}