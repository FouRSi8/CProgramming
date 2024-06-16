#include <stdio.h>
void main(){
    int n=10;
    for(int i=1;i<=n;i++){
        
        printf("%d\n",i);
        if(i==9){
            goto even;
        }
    }

    even:
    printf("even number here");
}