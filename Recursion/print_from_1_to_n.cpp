#include <iostream>
using namespace std;

void printNo(int i, int n) {
    if(i > n) return;
    cout << i;
    printNo(i, n);
}
int main() {
    int n;
    cout << "Enter the number n:";
    cin >> n;

    printNo(1, n);
    return 0;
}