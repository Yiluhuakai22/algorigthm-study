#ifndef LCSL_SOLUTION_101_200_H_
#define LCSL_SOLUTION_101_200_H_
#include "util.h"

namespace LCSL {
class Solution_135 {
   public:
    /*
    老师想给孩子们分发糖果，有 N 个孩子站成了一条直线，老师会根据每个孩子的表现，预先给他们评分。
    你需要按照以下要求，帮助老师给这些孩子分发糖果：
    每个孩子至少分配到 1 个糖果。
    评分更高的孩子必须比他两侧的邻位孩子获得更多的糖果。
    那么这样下来，老师至少需要准备多少颗糖果呢？

    输入：[1, 2, 4, 6, 3, 67, 54, 12, 1, 1, 1, 1, 4, 7, 56, 2]
    输出：34
    解释：你可以分别给这三个孩子分发 2、1、2 颗糖果。
    */
    int candy(vector<int>& ratings) {
        size_t r_len = ratings.size();
        vector<int> candys(r_len, 1);

        // 和左边的比
        for (size_t i = 1; i < r_len; i++) {
            if (ratings[i] > ratings[i - 1])
                candys[i] = candys[i - 1] + 1;
        }

        // 和右边的比
        for (size_t i = r_len - 2; i >= 1; i--) {
            if (ratings[i] > ratings[i + 1])
                candys[i] = max(candys[i], candys[i + 1] + 1);
        }
        size_t result = 0;
        for (size_t i = 0; i < r_len; i++) {
            result += candys[i];
        }
        return result;
    }
};
}  // namespace LCSL
#endif