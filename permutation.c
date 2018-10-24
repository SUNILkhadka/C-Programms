#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,no=1,r,k,ko=1,npr;

    printf("Enter The Value Of n : ");
    scanf("%d",&n);

    printf("Enter The Value Of r : ");
    scanf("%d",&r);

    for(i=1;i<=n;i++);

    {
        no=no*i;
    }
    k=(n-r);

    for(i=1;i<=k;i++);

    {
        ko=ko*i;
    }
    npr=no/ko;

    printf("Permutation : %d",npr);

    getch();
}
