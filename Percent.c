#include <stdio.h>
#include <conio.h>
void main()
{
    int p,c,m,e,b,t,per;

    printf("Enter Your Marks In Physics : ");
    scanf("%d",&p);

    printf("Enter Your Marks In Chemistry : ");
    scanf("%d",&c);

    printf("Enter Your Marks In Mathematics : ");
    scanf("%d",&m);

    printf("Enter Your Marks In English : ");
    scanf("%d",&e);

    printf("Enter Your Marks In Biology : ");
    scanf("%d",&b);

    {
        t=p+c+m+e+b;
    }

    {
        per=t/5;
    }

    printf("Your Total Marks : %d",t);
    printf("\nYour Percentage : %d Percent",per);

    getch();


}
