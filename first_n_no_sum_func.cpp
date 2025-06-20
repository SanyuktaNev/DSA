#include <iostream>  // using functional recursion
using namespace std;

int Sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + Sum(n - 1);  
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = Sum(n);     
    cout << "Sum is: " << result << endl;
    return 0;
}
