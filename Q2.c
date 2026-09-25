#include<stdio.h>
int main()
{
    int ps;
    float gp,cch;
    printf("Note: For Pass Status\n1.Enter 1 for yes.\t2.Enter 0 for No.\n Grade point should between 0 and 5.\n Credit Hours should between 0 and 130 ");
    printf("\nHave you passed Programming Fundamentals?\n");
    scanf("%d",&ps);
    printf("\nEnter Grade point:");
    scanf("%f",&gp);
    printf("\nEnter the completed credit hours:");
    scanf("%f",&cch);
    if ((ps<=1 && ps >=0) && (gp>=0 && gp<=5) && (cch>=0))
    {
        if ((ps=1) && (gp>=2.5) && (cch>=30))
        {
            printf("\n You're Eligible for Advanced Programming Fundamental's course.");
        }
        else {
            printf("\n You're not eligible for Advanced Programming Fundamental's course.");
        }
    }
    else {
        printf("\nInvalid input.");
    }
}