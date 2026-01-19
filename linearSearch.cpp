#include<stdio.h>
#include<conio.h>
int lS(int* arr, int a, int key) {
    for (int i = 0; i < a; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
	int a;
	printf("Size of array:");
    scanf("%d", &a);
    printf("\n");
    int arr[a];

    for (int j = 0; j<a; j++)
    {
    	scanf("%d", &arr[j]);
	}
    int key;
    printf("Enter Key:");
    scanf("%d",&key);
    int i = lS(arr, a, key);

    if (i == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", i);

    return 0;
}
