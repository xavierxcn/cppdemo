#include <iostream>

using namespace std;

void chang(int &v) {
    v = 1000;
}

int main() {
    int data = 100;
    int &ref = data;

    cout << "data = " << data << endl;
    chang(data);
    cout << "data = " << data << endl;

    // 对指针的引用
    int *p = &data;
    int *&pref = p;
    cout << "p = " << p << endl;
    cout << "pref = " << pref << endl;

    // 对数组的引用
    int arr[] = {1, 2, 3};
    int (&refarr)[3] = arr;
    cout << "arr = " << arr << endl;
    cout << "refarr = " << refarr << endl;

    string str = "hello";
    string &refstr = str;
    cout << "str = " << str << endl;
    cout << "refstr = " << refstr << endl;

    // 常引用
    const int &refconst = data;
    cout << "refconst = " << refconst << endl;
    // refconst = 1000; // error: assignment of read-only reference ‘refconst’
    // 只能修改原变量
    data = 8888;
    cout << "refconst = " << refconst << endl;

    // 引用的引用
    int &refref = ref;
    cout << "refref = " << refref << endl;
}
