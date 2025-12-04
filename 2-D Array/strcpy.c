#include<stdio.h>
#include<string.h>

int main(){

    char word[]="hello everyone";

    char copystring[sizeof(word)];
    
    

    strcpy(copystring,word);

    printf("copy string :%s",copystring);

    return 0;
}