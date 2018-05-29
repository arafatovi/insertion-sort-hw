#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 10000


void printArray(int A[], int length) {
    for (int i = 0; i < 10000; i++) {
        if (i != 0)
            cout << "\n";
        cout << A[i];
    }
    cout << endl;
}

void generateArray(int A[], int length) {
}

void insertionSort(int A[], int length) {
    for (int j = 1; j < length; j++) {
        int key = A[j];
        int i = j - 1;
        while (i > -1 && A[i] > key) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}

int main(void)

     {
    int array []={};
     int n = 10000;
    cout << "Before sorting: ";
    printArray(array, n);

    // Insertion Sort
    insertionSort(array, n);

    cout << "After sorting:  ";
    printArray(array, n);

}
