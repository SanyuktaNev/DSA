#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return n;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "enter the number:";
    cin >> n;

    int result = factorial(n);
    cout << "factorial is:" << result << endl;
    return 0;
}