#include <stdio.h>
void main(){
    //if , else if, else

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("A is greater");
    }

    else if(b>a && b>c){
        printf("B is greater");
    }

    else{
        printf("C is greater");
    }
}