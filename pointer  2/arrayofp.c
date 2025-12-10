#include<stdio.h>
    int main(){

        int array[6]={10,20,30,40,50};

        int *ptr[6];

        for(int i=0;i<5;i++){
            ptr[i] =&array[i];
        }

        for(int i=0;i<5;i++){
            printf("%d=>%p\n",*ptr[i],ptr[i]);
        }

        return 0;
    }