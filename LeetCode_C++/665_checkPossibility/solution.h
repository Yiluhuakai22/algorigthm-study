#include <algorithm>
#include <vector>
using std::min;
using std::vector;

class Solution {
public:
    bool checkPossibility(vector<int>& nums)
    {
        int i = 1, count = 0, size = nums.size();
        if (size <= 2) {
            return true;
        } else {
            nums.insert(nums.begin(), min(nums[0], nums[1]));
        }
        for (; i < size; i++) {
            if (nums[i] > nums[i + 1]) {
                ++count;
                if (count == 2) {
                    return false;
                }
                if (nums[i + 1] < nums[i - 1]) {
                    nums[i + 1] = nums[i];
                }
            }
        }
        return true;
    }
};