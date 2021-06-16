#include <algorithm>
#include <vector>
using std::min;
using std::vector;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        size_t count = points.size();
        sort(points.begin(), points.end(), [](vector<int> a, vector<int> b)
             { return a[0] < b[0]; });
        int n = 1;
        vector<int> inter = points[0];
        for (size_t i = 1; i < count; i++)
        {
            // 区间有交集
            if (points[i][0] <= inter[1])
            {
                inter[0] = min(points[i][0], inter[1]);
                inter[1] = min(points[i][1], inter[1]);
            }
            else
            {
                // 区间没有交集
                ++n;
                inter = points[i];
            }
        }

        return n;
    }

    int findMinArrowShots2(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end(), [](vector<int> a, vector<int> b)
             { return a[1] < b[1]; });
        int n = 1, pos = points[0][1];
        for (const vector<int> &balloon : points)
        {
            if (balloon[0] > pos)
            {
                ++n;
                pos = balloon[1];
            }
        }

        return n;
    }
};