#include<stdio.h>
    int main(){
        int num,first,last,sum;

    printf("enter any number");
    scanf("%d",&num);

        last= num % 10;

        while(num >=10){
            num = num / 10;
        }
        first = num;

        sum=first+last;
        printf("the sum of the first and last number is: %d\n",sum);

        return 0;
    }