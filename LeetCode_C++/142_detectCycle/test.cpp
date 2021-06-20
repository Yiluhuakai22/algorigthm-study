#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include <limits.h>

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

ListNode* build(std::vector<int> a, int pos)
{
    int count = a.size() - 1, i = 0;

    ListNode *temp = nullptr, *head = new ListNode(a[0]);
    ListNode* node = head;
    if (pos == 0) {
        temp = head;
    }

    for (int i = 1; i < count; i++) {
        node->next = new ListNode(a[i]);
        node = node->next;
        if (pos > -1 && pos == i) {
            temp = node;
        }
    }
    node->next = temp;
    return head;
}

TEST(TEST, TEST)
{
    Solution obj;
    ListNode* head = build(std::vector<int> { 3, 2, 0, -4 }, 1);
    EXPECT_EQ(1, obj.detectCycle_test(head));

    head = build(std::vector<int> { 1, 2 }, 0);
    EXPECT_EQ(0, obj.detectCycle_test(head));

    head = build(std::vector<int> { 1 }, -1);
    EXPECT_EQ(-1, obj.detectCycle_test(head));
}
