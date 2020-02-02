#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapsShould, SwapesSomething) {
  Solution solution;
  std::string str = "Hamburger";
  std::string actual = solution.Swaps(str,0,4);
  std::string expected = "uambHrger";
  EXPECT_EQ(expected, actual);
}

TEST(ReversesShould, ReversesSomething) {
  Solution solution;
  std::string str = "Hamburger";
  solution.Reverses(str);
  std::string expected = "regrubmaH";
  EXPECT_EQ(expected, str);
}

TEST(LowerCaseShould, LowerCaseSomething) {
  Solution solution;
  std::string str = "EE599";
  std::string actual = solution.LowerCase(str);
  std::string expected = "ee599";
  EXPECT_EQ(expected, actual);
}