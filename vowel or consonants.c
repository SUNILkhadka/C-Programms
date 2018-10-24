#include <stdio.h>
#include <conio.h>
void main()
{
    char c;
    int lo,up;

    printf("Enter An Integer : ");
    scanf("%c",&c);

    lo=(c== 'a' || c=='e' || c=='i' || c=='o' || c=='u');
    up=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if (lo || up)
        printf("%c is VOWEL",c);
    else
        printf("%c is CONSONANTS",c);

    getch();
}
