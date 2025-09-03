#include <iostream>
#include <vector>
using namespace std;

bool arraySorted(vector<int> &arr, int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i-1]) {

        }
        else {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter no of Elements:";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(arraySorted(arr, n)) {
        cout << "array is sorted" << endl;
    }
    else {
        cout << "array is not sorted" << endl;
    }
    return 0;
}