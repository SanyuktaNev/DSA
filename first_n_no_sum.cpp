#include <iostream> //using parameterised recursion
using namespace std;

void Sum(int i, int sum) {
    if(i < 1) {
        cout << sum;
        return;
    }
    Sum(i-1, sum+i);
}
int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    Sum(n,n);
    return 0;
}