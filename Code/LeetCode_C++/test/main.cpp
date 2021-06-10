#include "mytest.h"
using std::cin;

typedef void (*pFunc)();
std::map<std::string, pFunc> strFuncMap;

void buildMap() {
    strFuncMap["test_1"] = &test_1;
    strFuncMap["test_135"] = &test_135;
    strFuncMap["test_455"] = &test_455;
}

void callFunc(const std::string& str) {
    if (strFuncMap.count(str))
        (*strFuncMap[str])();
    else
        cout << "I haven't solved this question yet" << endl;
}

void myrelease() {
    buildMap();
    while (true) {
        string input;
        cout << "Please enter the question number you want to test (range 1~1889, exit and enter q): " << endl;
        cin >> input;
        if ((input.compare("q")) == 0) {
            break;
        }
        // if (!is_digits(input)) {
        //     cout << "invalid input" << endl;
        //     continue;
        // }

        int i = std::stoi(input);
        if (i < 1 || i > 1889) {
            cout << "The correct range is 1~1889, your input question number " << input << " not in range" << endl;
        }
        cout << "test number " << i << endl;

        callFunc("test_" + input);
    }
}

void mydebug() {
    test_135();
}

int main() {
    // myrelease();
    test_135();
    return 0;
}