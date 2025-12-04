#include <stdio.h>
#include <string.h>

int main(){
    
    char word[5]="hello";
    int length = strlen(word);
    printf("%d\n",length);

    char syntax[] = "hello there how are you";

    int syntaxLength = strlen(syntax);

    printf("%d\n",syntaxLength);

    return 0;
}