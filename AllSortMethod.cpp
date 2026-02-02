//all sorting methods 
#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
      for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
      bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
            }
        }
        if (swapped == false)
            break;
    }
}

int partition(int arr[], int low, int high) {
    
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);  
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int a,c;
	printf("Size of array:");
    scanf("%d", &a);
    printf("\n");
    int arr[a];
    for (int i = 0; i<a; i++)
    {
    	scanf("%d", &arr[i]);
	}
	printf("chose your shorting method:");
	printf("1.Bubble Sort");
	printf("2.Selection Sort);
	printf("3.Insertion Sort);
	printf("4.Merge Sort);
	printf("5.Quick Sort);
	printf("6.Exit");
	scanf("%d",&c);
	switch(c){
		case 1:
			bubbleSort(arr[],a);
			break;
	}
	for (int i = 0; i<a; i++)
    {
    	printf("%d", arr[i]);
	}
}
