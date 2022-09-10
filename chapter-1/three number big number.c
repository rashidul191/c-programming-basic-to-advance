#include<stdio.h>
int main()
{
    int a, b, c, high, mead;
    printf("Enter a three number: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a> b && a> c)
    {
        high = a;
    }
    else if(b>a && b> c)
    {

        high = b;

    }
    else
    {
        high = c;
    }

    if(a> b && a<c)
    {
        mead =a;
    }
    else if(b>a && b<c)
    {
        mead =b;
    }
    else
    {
        mead = c;
    }

    printf("High: %d", high);
    printf("\nMead: %d", mead);

    int result = (high + mead) / 2;

    printf("\nCT Result: %d", result);


}
