#include "util.h"

// 容器输出函数
template <class Container>
void Print(const Container& c) {
    cout << "{ ";
    for (auto it = c.begin(); it != c.end(); ++it) {
        cout << *it << ' ';
    }
    cout << '}' << endl;
}

// 是否是数字字符串
bool is_digits(const std::string& str) {
    return std::all_of(str.begin(), str.end(), ::isdigit);
}