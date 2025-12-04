#include <stdio.h>

#include <string.h>

int main (){

    char greeting[] = "hello ";

    char word2[]="good morning";

    strcat(greeting,word2);

    printf("concat word :%s",greeting);

    return 0;
}