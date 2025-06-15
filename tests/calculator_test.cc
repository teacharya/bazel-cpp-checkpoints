#include <gtest/gtest.h>
#include "lib/calculator.h"

TEST(CalculatorTest, Addition) {
    Calculator c;
    EXPECT_EQ(c.add(2, 3), 5);
}

TEST(CalculatorTest, DivisionByZero) {
    Calculator c;
    EXPECT_THROW(c.divide(1, 0), std::invalid_argument);
}