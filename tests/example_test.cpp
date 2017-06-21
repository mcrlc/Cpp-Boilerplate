//
// Created by Michael Ehrlich on 21/06/2017.
//

#include "gtest/gtest.h"


class ExampleFixture : public ::testing::Test {
public:
    int n;
    std::string s;
};

TEST_F(ExampleFixture, ExampleFixture_E_Test) {
    n = 1;
    s = "Hello World!";
    ASSERT_EQ(n, n);
    ASSERT_NE(s, "Goodbye!");
}
