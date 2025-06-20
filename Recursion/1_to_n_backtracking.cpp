#include <iostream>
using namespace std;

void printNo(int i, int n) {
    if(i < 1) return;
    printNo(i-1, n);
    cout << i;
}
int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    printNo(n, n);
    return 0;

}