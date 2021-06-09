#ifndef TINYSTL_TEST_UTIL_H_
#define TINYSTL_TEST_UTIL_H_

#include <assert.h>
#include <ctime>
#include <functional>
#include <iostream>
#include <random>
#include <string>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

// 容器输出函数
template <class Container>
void Print(const Container& c) {
    cout << "{ ";
    for (auto it = c.begin(); it != c.end(); ++it) {
        cout << *it << ' ';
    }
    cout << '}' << endl;
}

#endif
