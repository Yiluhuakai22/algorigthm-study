#ifndef LCSL_SOLUTION_1_100_H_
#define LCSL_SOLUTION_1_100_H_
#include <vector>
#include <map>

using std::vector;
using std::map;

namespace LCSL
{
    class Solution_1
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            std::size_t len = nums.size();
            map<int, int> a;      //提供一对一的hash
            vector<int> b(2, -1); //用来承载结果，初始化一个大小为2，值为-1的容器b
            for (std::size_t i = 0; i < len; i++)
            {
                if (a.count(target - nums[i]) > 0)
                {
                    b[0] = a[target - nums[i]];
                    b[1] = i;
                    break;
                }
                a[nums[i]] = i; //反过来放入map中，用来获取结果下标
            }
            return b;
        }
    };
} /* namespace end */
#endif