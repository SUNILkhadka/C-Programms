#include <stdio.h>
#include <conio.h>
void main()
{

int n=0,i;

printf("Enter The Year : ");
scanf("%d",&n);

if (n%4==0 && n/100!=0)
{
    printf("%d is Leap Year",n);
}
else
{
    printf("%d is Not Leap Year",n);
}
    getch();

}
