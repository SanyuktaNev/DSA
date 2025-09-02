#include <iostream>
#include <vector>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int n;
    cout << "Enter Number Of Elements:";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = largestElement(arr, n);
    cout << largest;

    return 0;
}
