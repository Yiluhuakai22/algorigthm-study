#ifndef LCSL_SOLUTION_1_100_H_
#define LCSL_SOLUTION_1_100_H_
#include "util.h"

namespace LCSL {
class Solution_1 {
   public:
    vector<int> twoSum_0(vector<int>& nums, int target) {
        std::size_t len = nums.size();
        map<int, int> a;  //提供一对一的hash
        vector<int> b(2, -1);
        for (std::size_t i = 0; i < len; i++) {
            if (a.count(target - nums[i]) > 0) {
                b[0] = a[target - nums[i]];
                b[1] = i;
                break;
            }
            a[nums[i]] = i;  //反过来放入map中，用来获取结果下标
        }
        return b;
    }

    vector<int> twoSum_1(vector<int>& nums, int target) {
        std::size_t len = nums.size();
        unordered_map<int, int> hashtable;
        vector<int> b(2, -1);
        for (std::size_t i = 0; i < len; ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                b[0] = it->second;
                b[1] = i;
                break;
            }
            hashtable[nums[i]] = i;
        }
        return b;
    }
};
}  // namespace LCSL
#endif