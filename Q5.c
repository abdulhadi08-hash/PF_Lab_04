#include<stdio.h>
int main()
{
    int a,price;
    float exc=0,bill,mts;
    printf("Plan 1: 1000 minutes for 500rs.\nPlan 2: 2000 minutes for 800rs.\nPlan 3: Unlimited minutes for 1200.\nPlan 4: Custom plan for Rs per minutes.\nNOTE: If Plan 1 and 2 limit exceeds than 2rs per minute will charged for extra minutes.");
    printf("\nSelect plan:");
    scanf("%d",&a);
    printf("\nEnter number of minutes:");
    scanf("%f",&mts);

    switch(a)
    {
        case 1:
            if(mts>1000)
            {
                exc=2*(mts-1000);
            }
            bill=500+exc;
            printf("\nYour initial bill for plan 1 is: 500rs.");
            printf("\nYour total bill is: %.2f rs.",bill);
            break;
        case 2:
            if(mts>2000)
            {
                exc=2*(mts-2000);
            }
            bill=800+exc;
            printf("\nYour initial bill for plan 1 is: 800rs.");
            printf("\nYour total bill is: %.2f rs.",bill);
            break;
        case 3:
            printf("\nYour total bill is: 1200rs.");
            break;
        case 4:
            bill=mts*price;
            printf("\nYour total bill for custom plan is: %.2f rs.",bill);
            break;
        default:
            printf("\nInvalid Choice.");
    }
}