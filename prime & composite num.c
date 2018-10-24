    #include <stdio.h>
    #include <conio.h>
    void main()
    {
        int n,i,c=0;
        printf("Enter any values : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)


        if(n%i==0)

{
    c++;
}

        if(c==2)

            {
                printf("Its prime Number");
            }
            else
            {
                printf("Composite Number");
            }
        getch();
    }
