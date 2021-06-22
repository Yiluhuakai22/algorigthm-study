#include <vector>
using std::vector;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int size = nums.size(), l = 0, r = size - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if ((mid - 1 >=0 &&nums[mid] == nums[mid - 1] )||(mid+1<size && nums[mid] == nums[mid + 1]))
            {
                mid = nums[mid] == nums[mid - 1] ? mid - 1 : mid;
            }
            else
            {
                break;
            }
            if ((mid - l) % 2 == 0)
            {
                l = mid + 2;
            }
            else
            {
                r = mid - 1;
            }
        }
        return nums[mid];
    }

    int singleNonDuplicate2(vector<int> &nums)
    {
        int i = 1, size = nums.size(), cnt = 0;
        while (i < size)
        {
            if (nums[i] == nums[i - 1])
            {
                i = i + 2;
            }
            else
            {
                break;
            }
        }
        return nums[i - 1];
    }
};