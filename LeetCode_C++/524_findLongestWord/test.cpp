#include <limits.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <cstdlib>
#include <iostream>
#include <string>

#include "solution.h"

using ::testing::_;
using ::testing::AtLeast;
using ::testing::Exactly;
using ::testing::Return;
using namespace testing;
using namespace std;

TEST(TEST, TEST)
{
    Solution obj;
    vector<string> dictionary{"ale", "apple", "monkey", "plea"};
    EXPECT_EQ("apple", obj.findLongestWord("abpcplea", dictionary));
    
    vector<string> dictionary2{"a","b","c"};
    EXPECT_EQ("a", obj.findLongestWord("abpcplea", dictionary2));

    
    vector<string> dictionary3{"ba","ab","a","b"};
    EXPECT_EQ("ab", obj.findLongestWord("bab", dictionary3));
}
