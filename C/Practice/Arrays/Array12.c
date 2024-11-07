// Program to merger 2 sorted arrays

#include <stdio.h>
int main (){

    int i,index1 ,index2, index3, n1, n2, m, arr1[10], arr2[10], arr3[20];
    
    index1 = 0;
    index2 = 0;
    index3 = 0;

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

    m = n1+n2;

    while (index1 < n1 && index2 < n2){
        if (arr1[index1] < arr2[index2]){
            
            arr3[index3] = arr1[index1];
            index1++;

        }
        else if (arr2[index2] < arr1[index1]){
            
            arr3[index3] = arr2[index2];
            index2++;
            

        }
        index3++;
        
    }

    if (index1 == n1){
        while (index2 < n2){
            
            arr3[index3] = arr2[index2];
            index2++;
            index3++;

        }
        
    }

    else if (index2 == n2){
        while (index1<n1){
           
            arr3[index3] = arr1[index1];
            index1++;
            index3++;

        }
        
    }
    
    printf("\n The merged array is : ");
    
    for (i=0;i<m;i++)
        printf("\n arr[%d] : %d", i, arr3[i]);

    return 0;

}