#include "mytest.h"

void test_1() {
    int a[4] = {2, 7, 11, 15};
    vector<int> nums;
    nums.insert(nums.begin(), a, a + 4);
    int target = 9;

    LCSL::Solution_1 obj;

    cout << "解法 1" << endl;
    Profiler::Start();
    auto ret = obj.twoSum_0(nums, target);
    Profiler::Finish();
    Profiler::dumpDuration();
    // Print(ret);

    cout << "解法 2" << endl;
    Profiler::Start();
    ret = obj.twoSum_1(nums, target);
    Profiler::Finish();
    Profiler::dumpDuration();
    // Print(ret);
}
