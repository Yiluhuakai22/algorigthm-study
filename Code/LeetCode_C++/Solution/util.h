#ifndef _LCSL_UTIL_H_
#define _LCSL_UTIL_H_

#include <algorithm>
#include <iostream>
#include <map>
#include <random>
#include <string>
#include <tr1/unordered_map>
#include <vector>

using std::cout;
using std::endl;
using std::map;
using std::max;
using std::ostream;
using std::size_t;
using std::string;
using std::vector;
using std::tr1::unordered_map;

// 容器输出函数
template <class Container>
void Print(const Container& c);

// 是否是数字字符串
bool is_digits(const std::string& str);
#endif
