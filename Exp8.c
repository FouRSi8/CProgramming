//array Concepts

#include <stdio.h>
void main(){
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);

    int arr[n];
    
    //Array Input
    for(int i=0;i<n;i++){
        printf("Enter element %d:",(i+1));
        scanf("%d",&arr[i]);
    }

    //int arr[5] = {10,20,30,40,50};

    //Array Print
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}