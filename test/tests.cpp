
TEST(PostfixTest, test4) {
    std::string postf = infix2postfix(inf);
    std::string expected = "6 4 2 - * 5 + 2.6 3 7 * + * 9 -";
    EXPECT_EQ(expected, postf);
}
