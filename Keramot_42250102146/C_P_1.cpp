#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    int birthYear = 2024 - age;
    cout << "Hello, " << name << ", you were born in " << birthYear << "!" << endl;

    return 0;
}
