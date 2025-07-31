#include <iostream>
using namespace std;

int findSum(int n) {
    if (n==1)
    return 1;

   return n + findSum(n - 1);
}
int main() {
    int n;
    cin >> n;

    cout << findSum(n);

   return 0;
}