#include <vector>
#include <queue>
#include <unordered_map>
using std::pair;
using std::priority_queue;
using std::unordered_map;
using std::vector;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int size = nums.size();
        unordered_map<int, int> myMap;
        for (int i = 0; i < size; i++)
        {
            ++myMap[nums[i]];
        }

        vector<pair<int, int>> myVec(myMap.begin(), myMap.end());
        sort(myVec.begin(), myVec.end(), [](const pair<int, int> &lhs, const pair<int, int> &rhs) -> bool
             { return lhs.second > rhs.second; });

        vector<int> result;
        pair<int, int> tmp;
        for (int i = 0; i < k; i++)
        {
            tmp = myVec[i];
            result.push_back(tmp.first);
        }
        return result;
    }

    vector<int> topKFrequent2(vector<int> &nums, int k)
    {
        vector<int> ret;
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        for (auto i : nums)
            mp[i]++;
        for (auto p : mp)
        {
            // 求前 k 大，用小根堆，求前 k 小，用大根堆。
            // 默认是大根堆 所以-p.second
            pq.push(pair<int, int>(-p.second, p.first));
            if (pq.size() > k)
                pq.pop();
        }
        while (k--)
        {
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};