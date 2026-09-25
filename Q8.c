#include<stdio.h>
int main()
{
    int z;
    float s;
    printf("\nZones\n1.School=1\t2.Highway=2\t3.Residential Area=3.");
    printf("\nSelect Zone:");
    scanf("%d",&z);
    printf("\nEnter the speed of vehicle:");
    scanf("%f",&s);

    switch(z)
    {
        case 1:
            if (s>30 && s<50)
                printf("\nSingle Fine of 1000rs.");
            else if (s>50)
                printf("\nDouble Fine. \nFine amount=2000rs");
            else
                printf("\nNo Fine.");
            break;
        case 2:
            if (s>100 && s<120)
                printf("\nSingle Fine of 1000rs.");
            else if (s>120)
                printf("\nDouble Fine. \nFine amount=2000rs");
            else
                printf("\nNo Fine.");
            break;
        case 3:
            if (s>30 && s<70)
                printf("\nSingle Fine of 1000rs.");
            else if (s>70)
                printf("\nDouble Fine. \nFine amount=2000rs");
            else
                printf("\nNo Fine.");
            break;
        default:
            printf("\nInvalid zone choice.");
    }
    return 0;
}