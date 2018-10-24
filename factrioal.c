#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,b=1;

    printf("Enter The Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
   {
    b=b*i;
   }

    printf("factrial of %d : %d",n,b);

    getch();
}
