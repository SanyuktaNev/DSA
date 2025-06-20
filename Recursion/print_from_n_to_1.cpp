#include <iostream>
using namespace std;

void reverseNo(int i, int n) {
    if (i < n) return;
    cout << i;
    reverseNo(i-1, n);
}
int main() {
    int i;
    cout << "Enter the number:";
    cin >> i;

    reverseNo(i, 1);
    return 0;
}