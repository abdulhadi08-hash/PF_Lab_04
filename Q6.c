#include<stdio.h>
int main()
{
    float fm,gpa;
    printf("\nEnter your GPA:");
    scanf("%f",&gpa);
    printf("\nEnter your monthly family income:");
    scanf("%f",&fm);
    if (gpa<0 || fm<0)
    {
        printf("\nInvalid Input");
    }
    else
    {
        if ((gpa>3.7 && gpa<=5.0) && (fm<50000))
        {
            printf("\nCongragulations! You are awarded a Full Scholarship.");
        }
        else if((gpa>3.3) && (fm<100000))
        {
            printf("\nCongragulations! You are awarded Partial/Half Scholarship.");
        }
        else
        {
            printf("\nNo Scholarship Awarded.");
        }
    }
}