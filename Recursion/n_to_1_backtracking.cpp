#include <iostream>
using namespace std;

void reverseNo(int i, int n) {
    if (i > n) return;
    reverseNo(i+1, n);
    cout << i;
}
int main() {
    int n;
    cout << "enter the number:";
    cin >> n;

    reverseNo(1, n);
    return 0;
}