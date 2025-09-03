#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int> &arr, int n) {
    int smallest = arr[0];
    int s_smallest = INT_MAX;
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            s_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < s_smallest) {
            s_smallest = arr[i];
        }
    }
    return s_smallest;
}
int main() {
    int n;
    cout << "Enter number of Elements:";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int s_smallest = secondSmallest(arr, n);
    cout << s_smallest;
    return 0;
}