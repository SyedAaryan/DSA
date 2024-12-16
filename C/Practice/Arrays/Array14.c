// Program to interchang biggest and smallest number in an array 

#include <stdio.h>

void read_array(int arr[], int n);
void display_array(int arr[], int n);
void interchange(int arr[], int n);
int biggest_pos(int arr[], int n);
int smallest_pos(int arr[], int n);

int main(){

    int arr[10], n;
    printf("\n Enter the size of the array : ");
    scanf("%d", &n);
    read_array(arr, n);
    interchange(arr, n);
    printf("\n The new array is : ");
    display_array(arr, n);
}

void read_array(int arr[], int n){

    int i;
    for (i=0;i<n;i++){
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void interchange(int arr[], int n){

    int temp, big_pos, small_pos;

    big_pos = biggest_pos(arr, n);
    small_pos = smallest_pos(arr, n);
    temp = arr[big_pos];
    arr[big_pos] = arr[small_pos];
    arr[small_pos] = temp;

}

int biggest_pos(int arr[], int n){

    int i, big = arr[0], pos = 0;

    for (i=0;i<n;i++){

        if (arr[i] > big){
            big = arr[i];
            pos = i;
        }

    }

    return pos;

}

int smallest_pos(int arr[], int n){

    int i, small = arr[0], pos = 0;

    for (i=0;i<n;i++){

        if (arr[i] < small){
            small = arr[i];
            pos = i;
        }

    }

    return pos;

}

void display_array(int arr[], int n){

    int i;
    for (i=0;i<n;i++){
        printf("\n arr[%d]: %d ", i, arr[i]);
    }

}