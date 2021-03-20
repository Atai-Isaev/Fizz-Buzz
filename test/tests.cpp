#include <catch2/catch.hpp>

#include <iostream>
#include <string>

std::string fizzbuzz(int a)
{
  if ((a % 15 == 0)) {
    return "fizzbuzz";
  } else if (a % 3 == 0) {
    return "fizz";
  } else if (a % 5 == 0) {
    return "buzz";
  } else {
    std::string s = std::to_string(a);
    return s;
  }
}

TEST_CASE("Factorials are computed", "[factorial]")
{
  REQUIRE(fizzbuzz(1) == "1");
  REQUIRE(fizzbuzz(2) == "2");
  REQUIRE(fizzbuzz(3) == "fizz");
  REQUIRE(fizzbuzz(4) == "4");
  REQUIRE(fizzbuzz(5) == "buzz");
  REQUIRE(fizzbuzz(6) == "fizz");
  REQUIRE(fizzbuzz(7) == "7");
  REQUIRE(fizzbuzz(8) == "8");
  REQUIRE(fizzbuzz(9) == "fizz");
  REQUIRE(fizzbuzz(10) == "buzz");
  REQUIRE(fizzbuzz(11) == "11");
  REQUIRE(fizzbuzz(12) == "fizz");
  REQUIRE(fizzbuzz(13) == "13");
  REQUIRE(fizzbuzz(14) == "14");
  REQUIRE(fizzbuzz(15) == "fizzbuzz");
}
