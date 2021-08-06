#include <vector>
using std::vector;
struct ListNode
{
    explicit ListNode(int i = 0) : mData(i), mNext(nullptr) {}
    ListNode *mNext;
    int mData;
};

class Solution
{
public:
    void bucket_sort(vector<int> &arr, int bucketSize = 10)
    {
        int size = arr.size();
        if (size == 0)
        {
            return;
        }
        int _max = arr[0];
        int _min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < _min)
            {
                _min = arr[i]; // 输入数据的最小值
            }
            else if (arr[i] > _max)
            {
                _max = arr[i]; // 输入数据的最大值
            }
        }
        int bucketNum = (_max - _min) / bucketSize + 1;

        vector<ListNode *> buckets(bucketNum, (ListNode *)(0));
        for (int i = 0; i < size; ++i)
        {
            int index = arr[i] / bucketSize;
            ListNode *head = buckets.at(index);
            buckets.at(index) = this->insert(head, arr[i]);
        }
        ListNode *head = buckets.at(0);
        for (int i = 1; i < bucketNum; ++i)
        {
            head = this->merge(head, buckets.at(i));
        }
        for (int i = 0; i < size; ++i)
        {
            arr[i] = head->mData;
            head = head->mNext;
        }
    }

    ListNode *insert(ListNode *head, int val)
    {
        ListNode dummyNode;
        ListNode *newNode = new ListNode(val);
        ListNode *pre, *curr;
        dummyNode.mNext = head;
        pre = &dummyNode;
        curr = head;
        while (nullptr != curr && curr->mData <= val)
        {
            pre = curr;
            curr = curr->mNext;
        }
        newNode->mNext = curr;
        pre->mNext = newNode;
        return dummyNode.mNext;
    }

    ListNode *merge(ListNode *head1, ListNode *head2)
    {
        ListNode dummyNode;
        ListNode *dummy = &dummyNode;
        while (nullptr != head1 && nullptr != head2)
        {
            if (head1->mData <= head2->mData)
            {
                dummy->mNext = head1;
                head1 = head1->mNext;
            }
            else
            {
                dummy->mNext = head2;
                head2 = head2->mNext;
            }
            dummy = dummy->mNext;
        }
        if (nullptr != head1)
            dummy->mNext = head1;
        if (nullptr != head2)
            dummy->mNext = head2;

        return dummyNode.mNext;
    }
};
