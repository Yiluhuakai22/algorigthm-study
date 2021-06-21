#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> chars(128, 0);
        vector<bool> flags(128, false);

        int t_len = t.length(), s_len = s.length();

        for (int i = 0; i < t_len; ++i)
        {
            flags[t[i]] = true;
            ++chars[t[i]];
        }
        int cnt = 0, l = 0, min_l = 0, min_n = s_len + 1;
        for (int r = 0; r < s_len && min_n > t_len; ++r)
        {
            if (flags[s[r]])
            {
                if (--chars[s[r]] >= 0)
                {
                    ++cnt;
                }
                while (cnt == t_len && min_n > t_len)
                {
                    if (r - l + 1 < min_n)
                    {
                        min_l = l;
                        min_n = r - l + 1;
                    }
                    if (flags[s[l]] && ++chars[s[l]] > 0)
                    {
                        --cnt;
                    }
                    ++l;
                }
            }
        }
        return min_n > s_len ? "" : s.substr(min_l, min_n);
    }
};