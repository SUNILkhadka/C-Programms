    #include <stdio.h>
    int main()
    {
        int n,rv=0;

        printf("Enter any number you want to reversed\n");
        scanf("%d",&n);

        while(n!=0)
        {
            rv=rv*10;
            rv=rv+n%10;
            n=n/10;
        }

        printf("Reversed number : %d\n",rv);

        return 0;
    }
