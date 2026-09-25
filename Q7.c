#include<stdio.h>
int main()
{
    float w;
    int p;
    printf("\nEnter total weight in elevator:");
    scanf("%f",&w);
    printf("\nEnter number of peoples in elevator:");
    scanf("%d",&p);
    if(w<0 || p<0)
    {
        printf("\nInvalid Input.");
    }
    else
    {
        if (w<1000)
        {
            if(p<10)
            {
                printf("\nOperates Normally.");
            }
            else
            {
                printf("\nOperation due to excees peoples.");
            }
        }
        else
        {
            printf("\nOperation Denied due to excess weight.");
        }
    }
}