#include <stdio.h>
#include <stdlib.h>

// Prototypes
void display_array(int a[], int size);
void swap(int* x, int* y);
void bubble_sort(int a[], int size);

int main() {
    int arr[] = { 14, 234, 5234, 120, 53, 12, 34, 531, 1, 4, 135, 13, 2, 182, 412, 123 };
    int size = (sizeof(arr) / sizeof(arr[0]));

    printf("The Array before Sort: ");
    display_array(arr, size);

    bubble_sort(arr, size);

    printf("The Array after Sort:  ");
    display_array(arr, size);

    return 0;
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int a[], int size) {
    int i, j;
    
    for (i = 0; i < (size - 1); i++) {
       
        for (j = 0; j < (size - i - 1); j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void display_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]); 
    }
    printf("\n");
}