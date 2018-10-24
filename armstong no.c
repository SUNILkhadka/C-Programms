#include <stdio.h>
#include <conio.h>
void main()
{
    int n,s=0,r=0,c=0,t;

    printf("Enter a number : ");
    scanf("%d",&n);

    t=n;
    while(n!=0)
    {
        r=n%10;
        c=(r*r*r);
        s=s+c;
        n=n/10;
    }

    if (s==t)
        printf("The Given no is Armstong Number");

    else
        printf("The Given no is Not Armstong");

        getch();
}
