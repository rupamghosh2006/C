#include<stdio.h>

int main(){
    int n, i, j, temp;
    int arr[100];
    printf("Enter the no. of elements you want to enter in the array: ");
    scanf("%d",&n);
    printf("Enter the elements one by one: \n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting: ");
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for(i = 1; i < n; i++){
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("\nArray after sorting: ");
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}