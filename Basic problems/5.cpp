#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << a;
    cout << b;

    return 0;

}