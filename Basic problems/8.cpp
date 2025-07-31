#include <bits/stdc++.h>
using namespace std;

int nthTermOfAP(int a1, int a2, int n) {
    return (a1 + (n - 1) * (a2 - a1));
}
int main() {
    int a1, a2, n;
    cin >> a1;
    cin >> a2;
    cin >> n;
    cout << nthTermOfAP(a1, a2, n);

    return 0;
}