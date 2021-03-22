#include <iostream>

void fizzBuzz(int a)
{
  if ((a % 15 == 0)) {
    std::cout << "Fizz Buzz" << std::endl;
  } else if (a % 3 == 0) {
    std::cout << "Fizz" << std::endl;
  } else if (a % 5 == 0) {
    std::cout << "Buzz" << std::endl;
  } else {
    std::cout << a << std::endl;
  }
}

int main()
{
  for (int i = 1; i <= 15; i++) {
    fizzBuzz(i);
  }
}