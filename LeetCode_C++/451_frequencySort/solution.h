#include <queue>
#include <unordered_map>
#include <string>
using std::string;
using std::pair;
using std::priority_queue;
using std::unordered_map;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;
        for (auto c : s)
        {
            mp[c]++;
        }
        for (auto p : mp)
        {
            pq.push(pair<int, char>(p.second, p.first));
        }

        s.clear();
        while (!pq.empty())
        {
            s.append(pq.top().first, pq.top().second);
            pq.pop();
        }
        return s;
    }
};