#include <iostream>
using namespace std;

bool isEven(int n) {
    if ((n & 1) == 0)
       return true;
    else
       return false;
}
int main() {
    int n;
    cin >> n;

    if (isEven(n) == true)
      cout << "the number is even";
    else
      cout << "the number is odd";

    return 0;
}