#include<stdio.h>
void main()
{
    int M;
    printf("Enter M value: ");
    scanf("%d",&M);
    if(M%3==0 && M%5==0)
    {
        printf("Good Number\n");
    }
    else if(M%3==0)
    {
        printf("Bad Number\n");
    }
    else if(M%5==0)
    {
        printf("Poor Number\n");
    }
    else
    {
        printf("-1\n");
    }
}