#include<stdio.h>

int main()
{
    int a,b,sum;

    printf("Enter two numbers\n");

    // Use fgets to safely read input
    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        sscanf(buffer, "%d %d", &a, &b);

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
    }
    else
    {
        printf("Invalid input. Please try again.\n");
    }

    return 0;
}