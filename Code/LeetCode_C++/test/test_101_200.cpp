#include "mytest.h"

void test_135() {
    int a[16] = {1, 2, 4, 6, 3, 67, 54, 12, 1, 1, 1, 1, 4, 7, 56, 2};
    vector<int> ratings;
    ratings.insert(ratings.begin(), a, a + 16);

    LCSL::Solution_135 obj;

    cout << "anwser 1" << endl;
    Profiler::Start();
    auto ret = obj.candy(ratings);
    Profiler::Finish();
    Profiler::dumpDuration();
    cout << ret << endl;
}
