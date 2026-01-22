#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target) {
    int l, h, mid;
    l = 0;
    h = n - 1;

    while (l < h) {
        mid = l + (h - l) / 2;

        if (arr[mid] == target)
            return target;
        else if (arr[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    int a = BinarySearch(arr, n, 23);

    if (a == -1)
        cout << "Target not Found" << endl;
    else
        cout << "Target Found" << endl;

    return 0;
}
