#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int up = size - 1;

    while (low <= up) {
        int mid = low + (up - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        }
        
        else {
            up = mid - 1;
        }
    }

    return -1;
}
void Sort(int arr[], int a) {
    int i, j;
    for (i = 0; i < a - 1; i++) {
        for (j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int a;
    int key;
	printf("Size of array:");
    scanf("%d", &a);
    printf("\n");
    int arr[a];
    for (int j = 0; j<a; j++)
    {
    	scanf("%d", &arr[j]);
	}
	
	Sort(arr,a);
    printf("Enter Key:");
    scanf("%d",&key);
    int i = binarySearch(arr, a, key);

    if (i != -1) {
        printf("Element %d found at index: %d\n", key, i);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
