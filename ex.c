#include<stdio.h>

int main()
{
    int a,b,sum;

    printf("Enter two numbers");
    // Use fgets() instead of scanf() to prevent buffer overflows
    if(fgets(buffer, sizeof(buffer) - 1, stdin))
    {
        sscanf(buffer, "%d %d", &a, &b);
    }
    else
    {
        printf("Invalid input\n");
        return;
    }

    sum = a + b;

    if(sum == 10)
    {
        printf("Sum is 10\n");
    }
    else
    {
        printf("Sum is not 10\n");
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",i);
    }

    return;
}