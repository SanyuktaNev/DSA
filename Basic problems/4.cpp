#include <iostream>
using namespace std;

int summation(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
      sum += (i * i);
    return sum;
}
int main() {
    int n;
    cin >> n;

    cout << summation(n);

    return 0;
}