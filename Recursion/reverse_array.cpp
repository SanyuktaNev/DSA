#include <iostream>
using namespace std;

void reverse(int i, int arr[], int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];  // dynamic allocation

    for (int i = 0; i < n; i++) cin >> arr[i];

    reverse(0, arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
