// Program to find whether the array of integers contains a duplicate number

# include <stdio.h>
int main(){
    
    int arr[10], i, n, j, flag = 0;

    printf("\n Enter hte size of the array (should be less than 10) : ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("\n arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        for (j=i;j<n;j++){
            if (arr[i] == arr[j] && i!=j){
                flag = 1;
                printf ("\n Duplicate number found at location %d and %d ",i, j);          
            }
        }
    }

    if (flag == 0)
        printf("\n No Duplicates Found");

    return 0;
    

}