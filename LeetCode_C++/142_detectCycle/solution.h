struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x)
        : val(x)
        , next(NULL)
    {
    }
};
class Solution {
public:
    ListNode* detectCycle(ListNode* head)
    {
        ListNode *slow = head, *fast = head;
        do {
            if (!fast || !fast->next)
                return nullptr;
            fast = fast->next->next;
            slow = slow->next;
        } while (fast != slow);
        // 如果存在，查找环路节点
        fast = head;
        while (fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }

    int detectCycle_test(ListNode* head)
    {
        int pos = -1;
        ListNode *slow = head, *fast = head;
        do {
            if (!fast || !fast->next)
                return pos;
            fast = fast->next->next;
            slow = slow->next;
        } while (fast != slow);
        // 如果存在，查找环路节点
        fast = head;

        while (fast != slow) {
            ++pos;
            slow = slow->next;
            fast = fast->next;
        }

        return pos + 1;
    }
};