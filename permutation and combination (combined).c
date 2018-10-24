#include <stdio.h>
#include <conio.h>
void main()
{
    int n,p,no=1,k,ko=1,npr,ncr,ro=1,r,i;

    printf("Enter The value Of n : ");
    scanf("%d",&n);

    printf("Enter The Value of r : ");
    scanf("%d",&r);

    for (i=1;i<=n;i++)

    {
        no=no*i;
    }
    k=n-r;
    for (i=1;i<=k;i++)

    {
        ko=ko*i;
    }

    npr=no/ko;
     for (i=1;i<=r;i++)
    {
        ro=ro*i;
    }

     ncr=no/(ko*ro);

    printf("Permutation of The given Value : %d",npr);

    printf("\nCombination of The given Value : %d",ncr);

    getch();
}

