//Amstrong Number

#include <stdio.h>
#include <math.h>

void main(){
    int num,temp,org;

    printf("Enter a number:\n");
    scanf("%d",&num);

    double count = 0;
    double sum = 0;

    temp=num;
    org=num;

    while(num>0){
        count++;
        num = num/10;
    }

    while(temp>0){
        double rem = temp%10;
        sum = sum + pow(rem,count);
        temp = temp/10;
        printf("%lf\n",sum);
    }


    if(org == sum){
        printf("Amstrong");
    }
    else{
        printf("Neil Amstrong");
    }
}