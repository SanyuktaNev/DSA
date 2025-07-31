#include <iostream>
using namespace std;

void printTable(int n, int i = 1) {
    if (i == 11) 
      return;
    cout << n << "*" << i << "=" << n * i << endl;
    i++;
    printTable(n, i);
}

int main() {
    int n;
    cin >> n;

    printTable(n);
}