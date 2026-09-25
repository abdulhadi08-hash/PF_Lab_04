#include<stdio.h>
int main()
{
    int ms,cs;
    float oa;
    printf("Note:\nMembership status\n1.Yes=1\t2.No=0");
    printf("\nCity Status\n1.Within City=1\t2.Outside of City=0\n");
    printf("\nEnter Order Amount:");
    scanf("%f",&oa);
    printf("\nIs customer premium?\n");
    scanf("%d",&ms);
    printf("\nEnter the city status:");
    scanf("%d",&cs);

    if((oa>=3000 && oa<=50000)||(ms=1))
    {
        printf("\nCongragulations! Delivery is Free.");
    }
    else {
        printf("\nDelivery charge are applicable.");
    }
    if((oa<=50000) && (cs=1))
    {
        printf("\nCash On Delivery is applicable for this order.");
    }
    else {
        printf("\nCash on Delivery is not applicable for this order.");
    }
}