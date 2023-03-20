#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("세 개의 정수를 입력 하세요: \n");
    scanf_s("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            if (b > c) 
            {
                printf("%d, %d, %d\n", a, b, c);
            }
            else
            {
                printf("%d, %d, %d\n", a, c, b);
            }

        }
        else 
        {
            printf("%d, %d, %d\n", c, a, b);
        }

       
    }
    else
    {
        if (b > c)
        {
            if (a > c)
            {
                printf("%d, %d, %d\n", b, a, c);
            }
            else
            {
                printf("%d, %d, %d\n", b, c, a);
            }
        }
        else
        {
            printf("%d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}

