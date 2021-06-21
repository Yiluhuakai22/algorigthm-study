#include <vector>
using std::size_t;
using std::vector;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        size_t size = prices.size();
        for (size_t i = 1; i < size; i++)
        {
            if (prices[i - 1] < prices[i])
            {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};