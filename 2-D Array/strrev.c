#include<stdio.h>
#include<string.h>

int main(){

    char word[]= "abcdefg";

    char reverseword[sizeof(word)];

    int length=strlen(word);

    int i,j;

    for(i=length-1,j=0;i>=0;i--,j++){
        reverseword[j]=word[i];
    }
    reverseword[j]='\0';

    printf("reverse word :%s",reverseword);

    return 0;
}