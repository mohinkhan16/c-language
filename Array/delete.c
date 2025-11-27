#include<stdio.h>
    int main(){

        int num[5]={4,8,5,6,7};

        int pos=2;

        for(int i=pos; i<4;i++){
            num[i]=num[i+1];
        }
        for(int i=0;i< 4;i++){
            printf("%d\n",num[i]);
        }

        return 0;
    }
