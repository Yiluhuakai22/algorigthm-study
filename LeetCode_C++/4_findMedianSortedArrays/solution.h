#include <vector>
#include <algorithm>
#include <climits>

using std::min;
using std::vector;

class Solution
{
public:
    int getKthElement(const vector<int> &nums1, const vector<int> &nums2, int k)
    {
        int size1 = nums1.size(), size2 = nums2.size();
        int index1 = 0, index2 = 0, _index1, _index2, v, v1, v2;
        while (true)
        {
            if (index1 == size1)
            {
                v = nums2[index2 + k - 1];
                break;
            }
            if (index2 == size2)
            {
                v = nums1[index1 + k - 1];
                break;
            }
            if (k == 1)
            {
                v = min(nums1[index1], nums2[index2]);
                break;
            }
            _index1 = min(index1 + k / 2 - 1, size1 - 1);
            _index2 = min(index2 + k / 2 - 1, size2 - 1);
            v1 = nums1[_index1];
            v2 = nums2[_index2];
            if (v1 <= v2)
            {
                k -= _index1 - index1 + 1;
                index1 = _index1 + 1;
            }
            else
            {
                k -= _index2 - index2 + 1;
                index2 = _index2 + 1;
            }
        }

        return v;
    }

    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        /* 主要思路：要找到第 k (k>1) 小的元素，那么就取 pivot1 = nums1[k/2-1] 和 pivot2 = nums2[k/2-1] 进行比较
         * 这里的 "/" 表示整除
         * nums1 中小于等于 pivot1 的元素有 nums1[0 .. k/2-2] 共计 k/2-1 个
         * nums2 中小于等于 pivot2 的元素有 nums2[0 .. k/2-2] 共计 k/2-1 个
         * 取 pivot = min(pivot1, pivot2)，两个数组中小于等于 pivot 的元素共计不会超过 (k/2-1) + (k/2-1) <= k-2 个
         * 这样 pivot 本身最大也只能是第 k-1 小的元素
         * 如果 pivot = pivot1，那么 nums1[0 .. k/2-1] 都不可能是第 k 小的元素。把这些元素全部 "删除"，剩下的作为新的 nums1 数组
         * 如果 pivot = pivot2，那么 nums2[0 .. k/2-1] 都不可能是第 k 小的元素。把这些元素全部 "删除"，剩下的作为新的 nums2 数组
         * 由于我们 "删除" 了一些元素（这些元素都比第 k 小的元素要小），因此需要修改 k 的值，减去删除的数的个数
         */
        int size = nums1.size() + nums2.size();
        if (size % 2 == 1)
        {
            return getKthElement(nums1, nums2, (size + 1) / 2);
        }
        else
        {
            return (getKthElement(nums1, nums2, size / 2) + getKthElement(nums1, nums2, size / 2 + 1)) / 2.0;
        }
    }

    double findMedianSortedArrays2(vector<int> &nums1, vector<int> &nums2)
    {
        int size1 = nums1.size(), size2 = nums2.size(), size = size1 + size2;
        int i = 0, index1 = 0, index2 = 0, val1 = 0, val2 = 0;
        if (size1 == 0)
        {
            return size % 2 ? nums2[size / 2] : (nums2[size / 2 - 1] + nums2[size / 2]) / 2.0;
        }
        if (size2 == 0)
        {
            return size % 2 ? nums1[size / 2] : (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
        }

        while (i <= size / 2)
        {
            val1 = val2;
            if (index1 < size1 && nums1[index1] <= nums2[index2])
            {
                val2 = nums1[index1];
                if (index1 + 1 < size1)
                {
                    ++index1;
                }
                else
                {
                    nums1[index1] = INT_MAX;
                }
            }
            else
            {
                val2 = nums2[index2];
                if (index2 + 1 < size2)
                {
                    ++index2;
                }
                else
                {
                    nums2[index2] = INT_MAX;
                }
            }

            ++i;
        }

        return size % 2 ? val2 : (val1 + val2) / 2.0;
    }
};