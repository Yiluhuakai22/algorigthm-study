#include <algorithm>
#include <vector>
using std::vector;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        size_t s_len = s.size();
        if (s_len == 0)
        {
            return 0;
        }
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        size_t count = 0;
        size_t g_len = g.size();
        for (size_t i = 0; i < s_len; i++)
        {
            if (count == g_len)
                break;
            if (s[i] >= g[count])
                ++count;
        }
        return count;
    }
};