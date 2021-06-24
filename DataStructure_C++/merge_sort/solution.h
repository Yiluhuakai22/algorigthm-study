#include <vector>
#include <algorithm>
using std::min;
using std::vector;

template <typename T>
class Solution
{
public:
    void merge(vector<T> &nums, int l, int mid, int r)
    {
        if (l >= r)
        {
            return;
        }
        vector<T> temp(nums.begin(), nums.end() + 1);
        int idxL = l, idxR = mid + 1;
        while (idxL <= mid && idxR <= r)
        {
            nums[l++] = temp[idxL] <= temp[idxR] ? temp[idxL++] : temp[idxR++];
        }
        while (idxL <= mid)
        {
            nums[l++] = temp[idxL++];
        }
        while (idxR <= r)
        {
            nums[l++] = temp[idxR++];
        }
    }

    void merge_sort(vector<T> &nums, int l, int r)
    {
        if (l < r)
        {
            int mid = l + (r - l) / 2; // 不用(l+r)/2 是因为l+r的和可能溢出
            merge_sort(nums, l, mid);
            merge_sort(nums, mid + 1, r);
            merge(nums, l, mid, r);
        }
    }

    void merge_sort2(vector<T> &nums, unsigned int len)
    {
        for (unsigned int step = 1; step < len; step += step)
        {
            for (unsigned int i = 0; i < len; i += step + step)
            {
                vector<T> temp(nums.begin(), nums.end() + 1);
                unsigned int l = i, mid = min(i + step, len), r = min(i + step + step, len);
                unsigned int idxL = l, idxR = mid;
                while (idxL < mid && idxR < r)
                {
                    nums[l++] = temp[idxL] <= temp[idxR] ? temp[idxL++] : temp[idxR++];
                }
                while (idxL < mid)
                {
                    nums[l++] = temp[idxL++];
                }
                while (idxR < r)
                {
                    nums[l++] = temp[idxR++];
                }
            }
        }
    }
};