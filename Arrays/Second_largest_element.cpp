#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &arr, int n) {
    int largest = arr[0];
    int s_largest = -1;
    for(int i = 1; i < n; i++) {
       if(arr[i] > largest) {
            s_largest = largest;
            largest = arr[i];
    }
    else if(arr[i] < largest && arr[i] > s_largest) {
        s_largest = arr[i];
    }
}
return s_largest;
}
int main() {
    int n;
    cout << "Enter no of Elements:";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
         cin >> arr[i];
    }
    int s_largest = secondLargest(arr, n);
    cout << s_largest;

    return 0;

}