#include <stdio.h>
#include <conio.h>
void main()
{
   int a[10],n,i;

   printf("Enter The Number To Convert : ");
   scanf("%d",&n);

   for(i=0;n>0;i++)

   {
       a[i]=n%2;
       n=n/2;
   }

   printf("\nBinary of Given Number : ");
   for(i=i-1;i>=0;i--)

   {
       printf("%d",a[i]);
   }

    getch();
}
