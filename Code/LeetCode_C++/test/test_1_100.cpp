#include "profiler.h"
#include "test_util.h"
#include "../Solution/solution_1_100.h"

void test_1()
{
    cout << "<test_1>" << endl;
    cout << "nums = [2,7,11,15], target = 9" << endl;
    int a[4] = {2, 7, 11, 15};
    vector<int> nums;
    nums.insert(nums.begin(), a, a + 5);
    Print(nums);
    int target = 9;

    LCSL::Solution_1 obj;
    Profiler::Start();
    auto ret = obj.twoSum(nums, target);
    Profiler::Finish();
    Profiler::dumpDuration();
    Print(ret);
}

int main()
{
    test_1();
    return 0;
}