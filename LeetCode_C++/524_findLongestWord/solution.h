#include <string>
#include <vector>
using std::string;
using std::vector;
#include <algorithm>

class Solution
{
public:
    string findLongestWord(string s, vector<string> &dictionary)
    {
        int s_len = s.length(), max_len = -1, i = 0, j = 0, t_len = 0;
        string max_str = "";
        for (const string &t : dictionary)
        {
            t_len = t.length();
            if (t_len < max_len)
            {
                // 只有t长度大于等于max_len的才有比较的必要
                continue;
            }
            while (i < s_len)
            {
                if (s[i] == t[j])
                {
                    ++j;
                }
                if (j == t_len)
                {
                    if (t_len > max_len || (t_len == max_len && t.compare(max_str) < 0))
                    {
                        max_len = t_len;
                        max_str = t;
                    }
                    break;
                }
                ++i;
            }
            i = 0;
            j = 0;
        }
        return max_str;
    }
};