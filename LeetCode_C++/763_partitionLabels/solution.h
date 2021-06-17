#include <algorithm>
#include <vector>
#include <map>
#include <string>

using std::map;
using std::vector;
using std::string;
using std::max;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        map<int, int> indexs;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            indexs[s[i]] = i;
        }
        vector<int> result;
        int count = 0, end = indexs[s[0]];
        for (int i = 0; i < size; i++)
        {
            if (i <= end)
            {
                end = max(indexs[s[i]], end);
                ++count;
            }
            else
            {
                result.push_back(count);
                end = indexs[s[i]];
                count = 1;
            }
        }
        result.push_back(count);
        return result;
    }

    // 官方题解
    vector<int> partitionLabels2(string s) {
        int last[26];
        int length = s.size();
        for (int i = 0; i < length; i++) {
            last[s[i] - 'a'] = i;
        }
        vector<int> partition;
        int start = 0, end = 0;
        for (int i = 0; i < length; i++) {
            end = max(end, last[s[i] - 'a']);
            if (i == end) {
                partition.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return partition;
    }

};