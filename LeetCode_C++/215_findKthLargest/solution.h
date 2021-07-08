#include <vector>
#include <algorithm>

using std::greater;
using std::sort;
using std::vector;

class Solution
{
public:
    int paritition(vector<int> &nums, int l, int r)
    {
        int val = nums[l];
        while (l < r)
        {
            while (l < r && nums[r] <= val)
            {
                --r;
            }
            nums[l] = nums[r];
            while (l < r && nums[l] >= val)
            {
                ++l;
            }
            nums[r] = nums[l];
        }
        nums[l] = val;
        return l;
    }

    int _sort(vector<int> &nums, int k, int l, int r)
    {
        int pos = this->paritition(nums, l, r);
        if (pos == k - 1)
        {
            return nums[pos];
        }
        else if (pos > k - 1)
        {
            return this->_sort(nums, k, l, pos - 1);
        }
        else
        {
            return this->_sort(nums, k, pos + 1, r);
        }
    }

    int findKthLargest(vector<int> &nums, int k)
    {
        return this->_sort(nums, k, 0, nums.size() - 1);
    }

    int findKthLargest2(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k - 1];
    }
};