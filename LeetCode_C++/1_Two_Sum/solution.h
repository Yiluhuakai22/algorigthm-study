#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        std::size_t len = nums.size();
        unordered_map<int, int> hashtable;
        vector<int> b(2, -1);
        for (std::size_t i = 0; i < len; ++i)
        {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end())
            {
                b[0] = it->second;
                b[1] = i;
                break;
            }
            hashtable[nums[i]] = i;
        }
        return b;
    }
};