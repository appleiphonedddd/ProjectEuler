#include <stdio.h>

int main()
{
    int number, i,sum;
    printf("Enter a random number");
    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        if (i%5 == 0 || i%3 == 0)
        {
            sum += i;
        }

    }
    printf("%d",sum);
}
