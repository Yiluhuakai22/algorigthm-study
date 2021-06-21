#include <vector>
using std::vector;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = nums1.size() - 1;
        m -= 1;
        n -= 1;
        while (n >= 0) {
            if (m < 0) {
                while (n >= 0) {
                    nums1[i--] = nums2[n--];
                }
                break;
            }
            if (nums1[m] > nums2[n]) {
                nums1[i--] = nums1[m--];
            } else {
                nums1[i--] = nums2[n--];
            }
        }
    }
};