#include "lib/hello_lib.h"
#include <gtest/gtest.h>

TEST(HelloLibTest, ReturnExpectedMessage) {
    EXPECT_EQ(get_message(), "Level 2: Hello from the library!");
}