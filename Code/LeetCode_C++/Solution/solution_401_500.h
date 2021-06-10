#ifndef LCSL_SOLUTION_401_500_H_
#define LCSL_SOLUTION_401_500_H_
#include <algorithm>
#include <map>
#include <vector>
using std::map;
using std::size_t;
using std::vector;

namespace LCSL {
class Solution_455 {
   public:
    /*
    假设你是一位很棒的家长，想要给你的孩子们一些小饼干。但是，每个孩子最多只能给一块饼干。
     对每个孩子 i，都有一个胃口值 g[i]，这是能让孩子们满足胃口的饼干的最小尺寸；并且每块饼干 j，都有一个尺寸 s[j] 。如果 s[j] >= g[i]，
     我们可以将这个饼干 j 分配给孩子 i ，这个孩子会得到满足。你的目标是尽可能满足越多数量的孩子，并输出这个最大数值。

     1 <= g.length <= 3 * 104
     0 <= s.length <= 3 * 104
     1 <= g[i], s[j] <= 231 - 1
    */
    int findContentChildren(vector<int>& g, vector<int>& s) {
        size_t s_len = s.size();
        if (s_len == 0) {
            return 0;
        }
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        size_t count = 0;
        size_t g_len = g.size();
        for (size_t i = 0; i < s_len; i++) {
            if (count == g_len)
                break;
            if (s[i] >= g[count])
                ++count;
        }
        return count;
    }
};
}  // namespace LCSL
#endif