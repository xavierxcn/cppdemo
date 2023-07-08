#include <iostream>

using namespace std;

class Student {
public:
    int id;
    string name;
    int score;

    void playGame();
};

void Student::playGame() {
    cout << "play game" << endl;
    cout << name << endl;

}


int main() {
    Student stu;
    stu.id = 1000;
    stu.name = "zhangsan";
    stu.score = 100;

    cout << stu.id << endl;

    stu.playGame();


    return 0;
}


