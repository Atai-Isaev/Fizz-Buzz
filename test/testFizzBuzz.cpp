#include <catch2/catch.hpp>
#include <string>

std::string testFizzbuzz(int a)
{
  if ((a % 15 == 0)) {
    return "Fizz Buzz";
  } else if (a % 3 == 0) {
    return "Fizz";
  } else if (a % 5 == 0) {
    return "Buzz";
  } else {
    std::string s = std::to_string(a);
    return s;
  }
}

TEST_CASE("FizzBuzz method are computer for 1-15", "[fizzbuzz]")
{
  REQUIRE(testFizzbuzz(1) == "1");
  REQUIRE(testFizzbuzz(2) == "2");
  REQUIRE(testFizzbuzz(3) == "Fizz");
  REQUIRE(testFizzbuzz(4) == "4");
  REQUIRE(testFizzbuzz(5) == "Buzz");
  REQUIRE(testFizzbuzz(6) == "Fizz");
  REQUIRE(testFizzbuzz(7) == "7");
  REQUIRE(testFizzbuzz(8) == "8");
  REQUIRE(testFizzbuzz(9) == "Fizz");
  REQUIRE(testFizzbuzz(10) == "Buzz");
  REQUIRE(testFizzbuzz(11) == "11");
  REQUIRE(testFizzbuzz(12) == "Fizz");
  REQUIRE(testFizzbuzz(13) == "13");
  REQUIRE(testFizzbuzz(14) == "14");
  REQUIRE(testFizzbuzz(15) == "Fizz Buzz");
}
