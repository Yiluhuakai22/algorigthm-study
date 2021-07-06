#include <vector>
#include <algorithm>
using std::swap;
using std::vector;

template <typename T>
class Solution
{
public:
    void selection_sort(vector<T> &nums, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[min])
                {
                    min = j;
                }
            }
            swap(nums[min], nums[i]);
        }
    }
};