#include <stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("배열 정렬 전:");
	for (int i = 0; i<n; i++;) {
		printf("%d", arr[1]);
	}
    selectionSort(arr, n);

    printf("\n배열 정렬 후: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}