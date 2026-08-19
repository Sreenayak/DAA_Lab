#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
     
    printf("Enter number of elements you want in array:");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter elements:");
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}