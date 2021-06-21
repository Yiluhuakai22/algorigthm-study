#include <string>
using std::string;

class Solution
{
public:
    bool validPalindrome(string s)
    {
        int l = 0, r = s.length() - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                ++l;
                --r;
            }
            else
            {
                return this->validPalindrome_(s, l + 1, r) || this->validPalindrome_(s, l, r - 1);
            }
        }
        return true;
    }

    bool validPalindrome_(string s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
};