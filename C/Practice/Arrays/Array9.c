// Program to delete a number from a given location in an array

#include <stdio.h>
int main(){

    int i, n, pos, arr[10];
    printf("\n Enter the number of elements in the array (should be less than 10): ");
    scanf("%d", &n);

    for (i=0;i<n;i++){
        printf("\n arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the position at which the number should be deleted: ");
    scanf("%d", &pos);

    for (i=pos;i<n-1;i++)
        arr[i] = arr[i+1];

    n--;

    printf("\n The array after deletion :");

    for (i=0;i<n;i++)
        printf("\n arr[%d] : %d", i, arr[i]);

    return 0;
    
}