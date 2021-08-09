#include <unordered_map>
#include <vector>
using std::unordered_map;
using std::vector;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        unordered_map<int, int>::iterator it;
        for (auto i : nums)
        {
            mp[i]++;
        }
        nums.clear();
        for (int j = 0; j < 3; j++)
        {
            it = mp.find(j);
            if (it != mp.end())
            {
                nums.insert(nums.end(), mp[j], j);
            }
        }
    }
};