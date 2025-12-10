
#include<stdio.h>

void num(int *call){

    *call = 50;
}
    int main(){

        int call = 60;
         
        num (&call);

        printf("%d", call);

        return 0;
    }