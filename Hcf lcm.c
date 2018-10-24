    #include <stdio.h>
    #include <conio.h>
    void main()
    {
        int a,b,n,m,r;
        printf("Enter any Two Number : ");
        scanf("%d%d",&a,&b);
        n=a;
        m=b;
        while(n!=0)
        {
            r=m%n;
            m=n;
            n=r;
        }

        printf("%d is L.C.M",(a*b/m));

        printf("\n%d is H.C.F",m);


        getch();
    }
