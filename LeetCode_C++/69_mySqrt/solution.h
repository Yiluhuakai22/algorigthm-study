
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
        {
            return 0;
        }
        // 二分法
        unsigned int l = 1, r = x, mid, sqrt;
        while (l <= r)
        {
            mid = (l + r) / 2;
            sqrt = x / mid;
            if (sqrt == mid)
            {
                break;
            }
            else if (mid > sqrt)
            {
                if ((mid - 1) < x / (mid - 1))
                {
                    return mid - 1;
                }
                r = mid - 1;
            }
            else
            {
                if ((mid + 1) > x / (mid + 1))
                {
                    return mid;
                }
                l = mid + 1;
            }
        }
        return mid;
    }

    unsigned int mySqrt2(int x)
    {
        if (x == 0)
        {
            return 0;
        }
        // 牛顿迭代法
        unsigned int a = x;

        while (a > x / a)
        {
            a = (a + x / a) / 2;
        }
        return a;
    }
};