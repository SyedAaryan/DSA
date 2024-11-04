// Program to print the position of the smallest number of n numbers using array

# include <stdio.h>
int main(){

    int i, n,arr[20], small, pos;

    printf("\n Enter the number of elements in the array (should be less than 20): ");
    scanf("%d", &n);

    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    
    small = arr[0];
    pos = 0;

    for (int i=0;i<n;i++){
        if (arr[i]<small){
            small = arr[i];
            pos=i;
        }
    }

    printf("\n The smallest element is : %d", small);
    printf("\n The position of the smallest element is : %d", pos);
    return 0;

}