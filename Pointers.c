#include <stdio.h>

void displayArray(int *arr, int n);
int sumArray(int *arr, int n);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are: ");
    displayArray(arr, n);

    int sum = sumArray(arr, n);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

void displayArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int sumArray(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

