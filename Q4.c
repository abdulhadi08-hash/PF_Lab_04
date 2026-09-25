#include<stdio.h>
int main()
{
    float temp,psi;
    printf("Enter the temperature of machine in degree:");
    scanf("%f",&temp);
    printf("\nEnter the pressure:");
    scanf("%f",&psi);
    if(temp>100 || psi>250)
    {
        printf("\nShutdown.");
    }
    else if((temp>=85 && temp<=100) && (psi>=200 && psi<=250))
    {
        printf("\nWarning Mode!!!");
    }
    else if(temp<85 && psi<200)
    {
        printf("\nWorking Normally.");
    }
    else {
        printf("\nInvalid Input Values!!");
    }
    return 0;
}