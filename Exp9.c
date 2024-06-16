//Linear Search

#include <stdio.h>

//User defined Functions:

void linearSearch(int key,int n,int arr[]){
    
    int i=0;

    for(i=0;i<n;i++){
        if(key == arr[i]){
            printf("Key found at %dth Index",i);
        }
    }
}

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

    int key;

    printf("Enter a key to search:\n");
    scanf("%d",&key);

    linearSearch(key,n,arr); //Function Calling
}