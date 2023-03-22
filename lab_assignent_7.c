#include <stdio.h>
#include <stdlib.h>

// swap function for bubble sort
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int data[], int n) {
    // array to count each index's swap count
    int swapCount[n];
    // setting each index in swap array to 0 to start
    for(int i = 0; i < n; i++) {
        swapCount[i] = 0;
    }

    // swapping if value before next is larger and adding swap count to index
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(data[j] > data[j+1]) {
                swap(&data[j], &data[j+1]);
                swapCount[j]++;
            }
        }
    }
    // outputting sorted array
    printArray(data, n);
    // printing num of swaps for each index
    for(int i = 0; i < n; i++) {
        printf("Index %d was swapped %d times.\n", i, swapCount[i]);
    }
}

void printArray(int data[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {97,  16, 45, 63, 13, 22, 7, 58, 72};
    int size = 9;
    bubbleSort(data, size);
    return 0;
}