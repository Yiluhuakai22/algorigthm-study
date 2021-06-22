#include <vector>
using std::vector;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int size = nums.size(), l = 0, r = size - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            if (nums[l] == nums[mid] && nums[r] == nums[mid])
            {
                ++l;
                --r;
            }
            else if (nums[mid] >= nums[l])
            { // 左边有序
                if (target >= nums[l] && target < nums[mid])
                {
                    r = mid - 1; // 目标在左边
                }
                else
                {
                    l = mid + 1; // 目标在右
                }
            }
            else
            { // 右边有序
                if (target > nums[mid] && target <= nums[r])
                {
                    l = mid + 1; // 目标在右边
                }
                else
                {
                    r = mid - 1; // 目标在左边
                }
            }
        }
        return false;
    }

    bool search2(vector<int> &nums, int target)
    {
        int i = 0, size = nums.size();
        while (i < size)
        {
            if (nums[i] == target)
            {
                return true;
            }
            ++i;
        }
        return false;
    }
};