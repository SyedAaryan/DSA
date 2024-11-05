// Program to insert a number in a sorted array

# include <stdio.h>
int main(){

    int i, j, n, num, arr[10];
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);

    for (i=0;i<n;i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the number to be inserted: ");
    scanf("%d", &num);

    for(i=0;i<n;i++){
        if (arr[i]>num)
        {
            for (j=n-1;j>=i;j--)
                arr[j+1] = arr[i];
            
            arr[i] = num;
            break;
        }
        
    }
    n += 1;

    printf("\n The array after insertion is: ");
    for (i=0;i<n;i++)
        printf("\n arr[%d] = %d", i, arr[i]);

}