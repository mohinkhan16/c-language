#include <stdio.h>
int main(){
    char word[6]="hello";
    printf("%s\n",word);
    char letter[6]={'a','b','c','d','e','\0'};

    printf("%s\n",letter);

    for(int i=0;letter[i]!='\0';i++){
        printf("%c\n",letter[i]);
    }
    return 0;
}