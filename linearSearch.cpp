#include<stdio.h>
#include<conio.h>
int linearSearch(int* arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 10, 50, 65, 30, 70, 75,80, 60, 20, 90, 40, 15, 35, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    scanf("%d",&key);
    int i = linearSearch(arr, n, key);

    if (i == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", i);

    return 0;
}
