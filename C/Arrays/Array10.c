// Program to delete an element from a sorted array

#include<stdio.h>
int main(){

    int i, n, arr[10], element, j;

    printf("\n Enter the number of elements in the array (shoudl be less than 10) : ");
    scanf("%d", &n);

    for (i=0;i<n;i++){
        printf("\n arr[%d] :",i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the element that needs to be deleted ");
    scanf("%d", &element);
    
    for (i=0;i<n;i++){
        if (arr[i] == element){
            for (j=i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
        }
    }

    n--;
    
    printf("\n Array after deletion :");

    for (i=0;i<n;i++)
        printf("\n arr[%d] = %d", i, arr[i]);
    
    return 0;

}