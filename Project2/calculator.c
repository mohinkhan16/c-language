#include<stdio.h>
    int main(){
     float a,b;
        char optration;

        printf("enter your  first number\n");
        scanf("%f",&a);

        printf("enter your secound number\n");
        scanf("%f",&b);

        printf("enter your opertaion you want perfrom (-,+,*,/)");
        scanf(" %c",&optration);

        switch (optration)
        {
        case '-':
            printf("substraction %2f\n",a-b);
            break;

            case '+':
            printf("addition %2f\n",a+b);
            break;

            case '*':
            printf("multiplication %2f\n",a*b);
            break;

            case '/':
            printf("division %2f\n",a/b);
            break;
        
        default:
            printf("invalid operation please choice correct opration");
            break;

           
        }

 return 0;





    }