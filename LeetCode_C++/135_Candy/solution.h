#include <algorithm>
#include <vector>
using std::max;
using std::vector;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        size_t r_len = ratings.size();
        vector<int> candys(r_len, 1);

        // 和左边的比
        for (size_t i = 1; i < r_len; i++)
        {
            if (ratings[i] > ratings[i - 1])
                candys[i] = candys[i - 1] + 1;
        }

        // 和右边的比
        for (size_t i = r_len - 2; i >= 1; i--)
        {
            if (ratings[i] > ratings[i + 1])
                candys[i] = max(candys[i], candys[i + 1] + 1);
        }
        size_t result = 0;
        for (size_t i = 0; i < r_len; i++)
        {
            result += candys[i];
        }
        return result;
    }
};