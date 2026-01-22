#include <iostream>
using namespace std;

int main() {

    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxsum = arr[0];
    int currsum = arr[0];

    for(int i = 1; i < n; i++){
        currsum = max(arr[i], currsum + arr[i]);
        maxsum = max(maxsum, currsum);
    }

    cout << "the max contiguous subarray sum: " << maxsum << endl;

    return 0;
}