#include<stdio.h>

int main()
{
    int a,b,sum;

    printf("Enter two numbers\n");
    if(fgets(buffer, 100, stdin) != NULL)
    {
        sscanf(buffer, "%d %d", &a, &b);
    }
    else
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
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
        printf("%d\n", i);
    }

    return;
}