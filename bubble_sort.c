#include<stdio.h>

int main(){
    int n, i, j, temp, flag;
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
        flag = 0;
        for(j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    printf("\nArray after sorting: ");
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}