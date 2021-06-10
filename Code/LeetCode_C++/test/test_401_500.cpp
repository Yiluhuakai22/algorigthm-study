#include "mytest.h"

void test_455() {
    int _g[3] = {1, 2, 3};
    vector<int> g;
    g.insert(g.begin(), _g, _g + 3);

    int _s[2] = {1, 1};
    vector<int> s;
    s.insert(s.begin(), _s, _s + 2);
    

    LCSL::Solution_455 obj;

    cout << "anwser 1" << endl;
    Profiler::Start();
    auto ret = obj.findContentChildren(g, s);
    Profiler::Finish();
    Profiler::dumpDuration();
    cout << ret << endl;
}
