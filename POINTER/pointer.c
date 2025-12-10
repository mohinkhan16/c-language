#include <stdio.h>

int main(){

    int a =5;

    int *ptr = &a;

    *ptr = 10;

    printf("pointer address: %u\n",ptr);

    printf(" a value :%d\n",a);


    return 0;


}