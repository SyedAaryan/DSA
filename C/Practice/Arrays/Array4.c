// Program to find the largest and second largest of n numbers using array

# include <stdio.h>
int main(){

    int i, n, arr[20], large, second_large;
    printf("\n Enter the number of elements in the array (should be less than 20): ");
    scanf("%d", &n);

    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    large = arr[0];
    for (int i=0;i<n;i++){
        
        if (arr[i]>large){
            large = arr[i];
        }
    }

    second_large = arr[1];
    for (int i=0;i<n;i++){
        
        if(arr[i] != large){

            if (arr[i]>second_large){
                second_large = arr[i];
            }
        }
    }

    printf("\n The elemnts are :");

    for (int i=0;i<n;i++)
        printf("%d", arr[i]);

    printf("\n The largest element is : %d", large);
    printf("\n The second largest element is : %d", second_large);

    return 0;
}
