#include<stdio.h>
int main()
{
    int tp,ffm,fmiles;
    printf("\nNOTE:Enter 1 for yes\t 0 for No.");
    printf("\nEnter Membership Status that you are Frequent flyer:");
    scanf("%d",&ffm);
    printf("\nEnter the Tickect Price:");
    scanf("%d",&tp);
    printf("\nEnter The miles flown this year only:");
    scanf("%d",&fmiles);

    if((ffm=1 && fmiles >50000)|| tp>80000)
    {
        printf("\nCongragulations! You got an upgrade to Bussiness Class.");
    }
    else
    {
        printf("\nNo Upgrade.");
    }
}