#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,a;

    printf("Enter an Integer : ");
    scanf("%d",&n);

    printf("Enter The Range : ");
    scanf("%d",&a);

    for(i=1;i<=a;++i)

    printf("\n   %d * %d = %d  ",n,i,n*i);

    getch();
}
