#include <stdio.h>

// Function prototypes
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int sumArray(int arr[], int n);

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);

    printf("Array elements are: ");
    displayArray(arr, n);

    int sum = sumArray(arr, n);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}

void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

