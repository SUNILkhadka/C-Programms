#include <stdio.h>
#include <conio.h>
void main()
{
    int n,p,no=1,k,ko=1,ncr,r,ro=1,i;

    printf("Enter The value Of n : ");
    scanf("%d",&n);

    printf("Enter The Value of r : ");
    scanf("%d",&r);

    for (i=1;i<=r;i++)
    {
        ro=ro*i;
    }

    for (i=1;i<=n;i++)

    {
        no=no*i;
    }
    k=n-r;
    for (i=1;i<=k;i++)

    {
        ko=ko*i;
    }

    ncr=no/(ko*ro);

    if (r>n)
        printf("The value of n-r is negative please check  ");
else
    printf("Combination of The given Value : %d",ncr);

    getch();
}
