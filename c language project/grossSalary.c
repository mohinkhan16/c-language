#include<stdio.h>
    int main()
    {
        float grossSalary,baseSalary,hraPercentage,daPercentage,taPercentage;

        baseSalary=100;

         float hrapercentage=10;
         daPercentage=5;
         taPercentage=8;

        hrapercentage = (baseSalary*hraPercentage)/100;

        daPercentage = (baseSalary*daPercentage)/100;

        taPercentage = (baseSalary*taPercentage)/100;

    
        grossSalary = baseSalary+hrapercentage+daPercentage+taPercentage;

        printf("grossSalary:%2f",grossSalary);

        return 0;
    }