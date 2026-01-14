#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int A[], int l, int h) {
    int pivot = A[h];
    int i = l - 1;

    for (int j = l; j < h; j++) {
        if (A[j] <= pivot) {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[h]);
    return i + 1;
}

void QuickSort(int A[], int l, int h) {
    if (l < h) {
        int p = partition(A, l, h);
        QuickSort(A, l, p - 1);
        QuickSort(A, p + 1, h);
    }
}

int main() {
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(A) / sizeof(A[0]);

    QuickSort(A, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
