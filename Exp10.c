//Bubble Sort Algorithm

#include <stdio.h>
void main(){
    
    int n;
    int arr[50]; //Initializing with a lot of spaces to fill with elements (The for loop only reads upto 'n-1' indices)

    printf("Enter no: of elements in the array:\n");
    scanf("%d",&n);

    //Array Input:
    printf("Enter the Unsorted Array:\n");
    printf("Enter n elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    /*
    //Uncomment this code to Test Print the user input Array:
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    */

    //Bubble Sort:
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ //If the j'th element is greater than (j+1)'th element
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Printing Output using another For-Loop

    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}