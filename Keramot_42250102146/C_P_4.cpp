#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter numbers (0 to stop): ";
    while (true) {
        cin >> num;
        if (num == 0)
            break;
        sum += num;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
