#include "test.h"
using std::cin;

typedef void (*pFunc)();
std::map<std::string, pFunc> strFuncMap;

void buildMap() {
    strFuncMap["test_1"] = &test_1;
}

void callFunc(const std::string& str) {
    if (strFuncMap.count(str))
        (*strFuncMap[str])();
    else
        cout << "这题还没刷到呢" << endl;
}

int main() {
    buildMap();
    while (true) {
        string input;
        cout << "请输入你要测试的题号 (范围1~1889，退出输入q): " << endl;
        cin >> input;
        if ((input.compare("q")) == 0) {
            break;
        }

        int i = std::stoi(input);
        if (i < 1 || i > 1889) {
            cout << "正确范围1~1889，你的输入题号 " << input << " 不在范围内" << endl;
        }
        cout << "测试第" << i << "题" << endl;

        callFunc("test_" + input);
    }

    return 0;
}