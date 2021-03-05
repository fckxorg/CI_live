#include <gtest/gtest.h>

#include "is_odd.hpp"

TEST(is_odd, odd_numbers) {
    EXPECT_EQ(is_odd(3), true);  
    EXPECT_EQ(is_odd(1), true);
    EXPECT_EQ(is_odd(-3), true);
    EXPECT_EQ(is_odd(-7), true);
}

TEST(is_odd, even_numbers) {
    EXPECT_EQ(is_odd(2), false);
    EXPECT_EQ(is_odd(4), false);
    EXPECT_EQ(is_odd(-6), false);
    EXPECT_EQ(is_odd(-8), false);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
