#include <vector>
using std::vector;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int size = nums.size();
        vector<int> result(2, -1);
        if (size == 0)
        {
            return result;
        }

        int l = 0, r = size - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = this->searchLeft(nums, target, l, r);
                r = this->searchRight(nums, target, l, r);
                result[0] = l;
                result[1] = r;
                break;
            }
        }

        return result;
    }

    int searchLeft(vector<int> &nums, int target, int l, int r)
    {
        int size = nums.size();
        int mid, pre = l;

        while (l < r)
        {
            mid = (l + r) / 2;
            if (nums[mid] < target)
            {
                pre = l;
                l = mid + 1;
            }
            else
            {
                if (mid == 0)
                {
                    return 0;
                }
                else if (nums[mid - 1] < target)
                {
                    return mid;
                }
                else
                {
                    r = mid - 1;
                    l = pre;
                }
            }
        }
        return r;
    }

    int searchRight(vector<int> &nums, int target, int l, int r)
    {
        int size = nums.size();
        int mid, pre = r;

        while (l < r)
        {
            mid = (l + r) / 2;
            if (nums[mid] > target)
            {
                pre = r;
                r = mid - 1;
            }
            else
            {
                if (mid == size - 1)
                {
                    return size - 1;
                }
                else if (nums[mid + 1] > target)
                {
                    return mid;
                }
                else
                {
                    l = mid + 1;
                    r = pre;
                }
            }
        }
        return l;
    }

    vector<int> searchRange2(vector<int> &nums, int target)
    {
        int size = nums.size();
        vector<int> result(2, -1);
        if (size == 0)
        {
            return result;
        }

        int l = 0, r = size - 1, mid;
        while (l < r)
        {
            mid = (l + r) / 2;
            if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid;
                while (l - 1 >= 0 && nums[l - 1] == target)
                {
                    --l;
                }
                r = mid;
                while (r + 1 <= size - 1 && nums[r + 1] == target)
                {
                    ++r;
                }
                break;
            }
        }

        if (r >= l)
        {
            result[0] = nums[l] == target ? l : -1;
            result[1] = nums[r] == target ? r : -1;
        }

        return result;
    }
};