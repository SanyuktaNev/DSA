#include <iostream>
#include <vector>
using namespace std;
int smallestElement(vector<int> &arr, int n) {
    int smallest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
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

    int smallest = smallestElement(arr, n);
    cout << smallest;

    return 0;
}

