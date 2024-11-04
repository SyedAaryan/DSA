// Program to find the mean of n numbers using arrays

# include <stdio.h>
int main(){

    int i, n, arr[20], sum=0;
    float mean = 0.0;
    printf("\n Enter the number of elements in the array (shoud be less than 20): ");
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        printf("\n arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    for (int i=0;i<n;i++)
        sum += arr[i];

    mean = (float)sum/n;

    printf("\n The sum of the elements in the array is : %d", sum);
    printf("\n The mean of the elements in the array is : %.2f", mean);

    return 0;
}