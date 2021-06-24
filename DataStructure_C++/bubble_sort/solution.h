#include <vector>
#include <algorithm>
using std::swap;
using std::vector;

template <typename T>
class Solution
{
public:
    void bubble_sort(vector<T> &nums, int n)
    {
        bool swapped;
        for (int i = 0; i <= n; i++)
        {
            swapped = false;
            for (int j = 1; j <= n - i; j++)
            {
                if (nums[j] < nums[j - 1])
                {
                    swap(nums[j], nums[j - 1]);
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }
    }
};