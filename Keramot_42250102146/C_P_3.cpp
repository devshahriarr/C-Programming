#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers (1-20): ";
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
