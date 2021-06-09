#include "test.h"

void test_1() {
    cout << "给定一个整数数组nums和一个整数目标值target，请你在该数组中找出 和为目标值target的那两个整数，并返回它们的数组下标。你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。你可以按任意顺序返回答案。" << endl;
    cout << "输入：nums = [2,7,11,15], target = 9\n输出：[0,1]\n解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。" << endl;
    int a[4] = {2, 7, 11, 15};
    vector<int> nums;
    nums.insert(nums.begin(), a, a + 4);
    int target = 9;

    LCSL::Solution_1 obj;
    Profiler::Start();
    auto ret = obj.twoSum_0(nums, target);
    Profiler::Finish();
    Profiler::dumpDuration();
    Print(ret);

    Profiler::Start();
    ret = obj.twoSum_1(nums, target);
    Profiler::Finish();
    Profiler::dumpDuration();
    Print(ret);
}
