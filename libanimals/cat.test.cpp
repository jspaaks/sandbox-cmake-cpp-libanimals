#include <gtest/gtest.h>
#include <libanimals/cat.cpp>
#include <string>


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(CatTests, getName) {
    animals::Cat felix("felix");
    std::string actual = felix.getName();
    std::string expected = "felix";
    ASSERT_EQ(actual, expected);
}

TEST(RectangleTests, accessNameMember) {
    animals::Cat felix("felix");
    std::string actual = felix.name;
    std::string expected = "felix";
    ASSERT_EQ(actual, expected);
}
