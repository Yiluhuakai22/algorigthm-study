#include <vector>
using std::vector;

template <typename T>
class Solution
{
public:
    void voidinsertion_sort(vector<T> &nums, int n)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            j = i + 1;
            T val = nums[j];
            while (j > 0 && val < nums[j - 1])
            {
                nums[j] = nums[j - 1];
                --j;
            }
            nums[j] = val;
        }
    }
};