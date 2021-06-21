#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        int l = 0, r = floor(sqrt(5));
        unsigned int s = 0;

        while (l <= r)
        {
            s = pow(l, 2) + pow(r, 2);
            if (s > c)
            {
                --r;
            }
            else if (s < c)
            {
                ++l;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};