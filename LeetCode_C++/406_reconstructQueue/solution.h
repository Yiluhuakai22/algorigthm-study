#include <vector>
#include <algorithm>
using std::vector;

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
    {
        sort(people.begin(), people.end(), [](vector<int> a, vector<int> b) { return (a[0] > b[0]) || (a[0] == b[0] && a[1] < b[1]); });
        vector<vector<int>> queue;
        for (const vector<int> &p : people) {
            queue.insert(queue.begin() + p[1], p);
        }
        return queue;
    }
};