// Program to merge two arrays

#include <stdio.h>
int main (){

    int i,index, n1, n2, m, arr1[10], arr2[10], arr3[20];
    index = 0;

    printf("\n Enter the number of elements in array 1 (should be less than 10): ");
    scanf("%d", &n1);

    for (i=0;i<n1;i++){

        printf("\n arr1[%d]: ", i);
        scanf("%d", &arr1[i]);

    }

    printf("\n Enter the number of elements in array 2 (should be less than 10): ");
    scanf("%d", &n2);

    for (i=0;i<n2;i++){

        printf("\n arr2[%d]: ", i);
        scanf("%d", &arr2[i]);

    }

    m = n1 + n2;

    for (i=0;i<n1;i++){
        arr3[index] = arr1[i];
        index++;
    }

    for (i=0;i<n2;i++){
        arr3[index] = arr2[i];
        index++;
    }

    printf("\n Merged array :");

    for (i=0;i<m;i++)
        printf("\n arr3[%d] : %d", i, arr3[i]);

    return 0;
}