#include <vector>
using std::vector;

template <typename  T>
class Solution
{
public:
    int paritition(vector<T> &nums, int l, int r)
    {
        T pivot = nums[l];
        while (l < r)
        {
            while (l < r && nums[r] >= pivot)
            {
                --r;
            }
            nums[l] = nums[r];
            while (l < r && pivot >= nums[l])
            {
                ++l;
            }
            nums[r] = nums[l];
        }
        nums[l] = pivot;
        return l;
    }
    void quick_sort(vector<T> &nums, int l, int r)
    {
        if (l < r)
        {
            int pivot = this->paritition(nums, l, r);
            quick_sort(nums, l, pivot - 1);
            quick_sort(nums, pivot + 1, r);
        }
    }
};