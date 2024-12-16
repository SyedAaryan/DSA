//Program to read and display n numbers usiing an array

# include <stdio.h>
int main(){

    int i,n, arr[20];
    printf("\n Enter the number of elements in the array (should be less than 20): ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n The array elements are ");

    for (i=0;i<n;i++)
        printf("\t %d", arr[i]);

    return 0;
}