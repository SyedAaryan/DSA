// Program to insert a number at a given location in an array

# include <stdio.h>
int main(){

    int i, n, num, pos, arr[10];
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i=0;i<n;i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the number to be inserted :");
    scanf("%d", &num);

    printf("\n Enter the position at which the number should be inserted: ");
    scanf("%d", &pos);

    for (i=n-1;i>=pos;i--)
        arr[i+1] = arr[i];

    arr[pos] = num;
    n += 1;

    printf("\n The array after insertion is: ");
    for (i=0;i<n;i++)
        printf("\n arr[%d] = %d", i, arr[i]);

}