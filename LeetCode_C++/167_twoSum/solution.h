#include <unordered_map>
#include <vector>
using std::unordered_map;
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        vector<int> result { 1, 2 };
        while (l < r) {
            if (nums[l] + nums[r] > target) {
                --r;
            } else if (nums[l] + nums[r] < target) {
                ++l;
            } else {
                result = { l + 1, r + 1 };
                break;
            }
        }
        return result;
    }

    // 同1_twoSum
    vector<int> twoSum2(vector<int>& nums, int target)
    {
        std::size_t len = nums.size();
        unordered_map<int, int> hashtable;
        vector<int> b(2, -1);
        for (std::size_t i = 0; i < len; ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                b[0] = it->second + 1;
                b[1] = i + 1;
                break;
            }
            hashtable[nums[i]] = i;
        }
        return b;
    }
};