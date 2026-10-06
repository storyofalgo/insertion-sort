#include<stdio.h>

// Insertion Sort: insert each element into its proper order within the sorted portion.
// This sample program prints the array before and after sorting.
int main() {
    // Array to sort and its length.
    int Arr[] = {43,45,98,23,21,5,1,8,2,6,77,18,4};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,p,s;

    // Print the original array before sorting.
    printf("Before Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    // Pick each element and place it in the correct position within the sorted prefix.
    for(i = 1;i < n;i++) {
        s = Arr[i];
        for(j = i-1;j >= 0 && Arr[j] > s;j--) {
            Arr[j+1] = Arr[j];
            Arr[j] = s;
            i = j - 1;
        }
    }

    // Print the sorted array after the insertion process.
    printf("After Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    return 0;
}