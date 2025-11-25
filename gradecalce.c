#include<stdio.h>
int main(){
    int marks;

    printf("enter your marks(0-100):");
    scanf("%d",&marks);

    if(marks >=90){
    printf("you have achive A Grade.\n");
    }
    else if(marks >=80){
    printf("you have achive B Grade.\n");
    }
    else if(marks >=70){
    printf("you have achive C Grade.\n");
    }
    else if(marks >=60){
    printf("you have achive D Grade.\n");
    }
    else if(marks >=40){
    printf("you have pass.\n");
    }
    else
    {
     printf("sorry! you are fail.\n");
    }
     return 0;

}