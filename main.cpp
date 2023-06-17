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
}
