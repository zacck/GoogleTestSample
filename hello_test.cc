#include <gtest/gtest.h>

int multiply(int a, int b) { return a * b; }

int lowPassFilter(int c) { return c - 2; }

//  basic assertions
TEST(HelloTest, BasicAssertions) {
  // non equal strings
  EXPECT_STRNE("hello", "world");
  // Equal
  EXPECT_EQ(8 * 9, 72);
}

TEST(MultiplyTest, BasicAssertions) { EXPECT_EQ(multiply(6, 6), 36); }

TEST(LPFilterTest, BasicAssertions) { EXPECT_EQ(lowPassFilter(42), 40); }
