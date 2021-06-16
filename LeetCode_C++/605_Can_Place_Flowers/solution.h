#include <vector>
using std::vector;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int size = flowerbed.size();
        // 在 flowerbed 数组两端各增加一个 0， 这样处理的好处在于不用考虑边界条件
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.end(), 0);
        int m = 0, k = 0;
        size += 2;
        for (int i = 0; i < size; ++i)
        {
            if (flowerbed[i] == 0)
            {
                if (k == 2)
                {
                    ++m;
                    k = 1;
                }
                else
                {
                    ++k;
                }
            }
            else
            {
                k = 0;
            }
        }

        return m >= n;
    }
};