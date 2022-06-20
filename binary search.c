#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},lower=0,upper=4,found=0,mid,item;
    printf("Enter Searching item: ");
    scanf("%d",&item);
    while(lower<upper)
    {
        mid=(lower+upper)/2;
        if (a[mid]==item)
        {
            found = 1;
            break;
        }
        if (a[mid]<item)
        {
            lower=mid+1;
        }
        else
        {
            upper=mid-1;
        }
    }
    if(found==1)
    {
        printf("\nItem found with location = a[%d]",mid);
    }
    else
    {
        printf("\nItem not found");
    }

    return 0;
}
