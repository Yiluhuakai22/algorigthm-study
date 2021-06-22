#include <vector>
#include <algorithm>

using std::min;
using std::vector;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int size = nums.size(), l = 0, r = size - 1, mid, m = nums[0];
        while (l <= r)
        {
            if (l == r)
            {
                return min(m, nums[l]);
            }
            mid = (l + r) / 2;
            if (nums[l] == nums[mid] && nums[mid] == nums[r])
            {
                m = min(m, nums[l]);
                l++;
                r--;
            }
            else if (nums[mid] >= nums[l])
            {
                m = min(m, nums[l]);
                l = mid + 1;
            }
            else
            {
                m = min(m, nums[mid]);
                r = mid - 1;
            }
        }
        return m;
    }

    int findMin2(vector<int> &nums)
    {
        int i = 1, size = nums.size(), min = nums[0];
        while (i < size)
        {
            if (nums[i] < min)
            {
                return nums[i];
            }
            ++i;
        }
        return min;
    }
};