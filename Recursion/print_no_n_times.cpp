#include <iostream>
using namespace std;

void printNumber(string name, int i, int n) {
    if(i > n) return;
    cout << name << endl;
    printNumber(name, i+1, n);
}
int main() {
    string name;
    int n;

    cout << "Enter the name:";
    cin >> name;

    cout << "Enter the number of times:";
    cin >> n;

    printNumber(name, 1, n);
    return 0;

}
