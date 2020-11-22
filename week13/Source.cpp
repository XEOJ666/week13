
#include<stdio.h>
void fib(int*);
void getInt(int*);

int main()
{
    int x[999];
    int* Px= x;
    getInt(Px);
    fib(Px);
    return 0;
}

void fib(int* y)
{
    int a = 1, b = 1, sum = 0, h;
    if (*y < 0 || *y <= 2 || *y>1000)
    {
        printf("put num > 2 and < 1000");
    }
    else if (*y % 2 != 0)
    {
        printf("Please put event num");
    }
    else
    {
        while (b < *y)
        {
            if (b % 2 == 0)
            {
                sum = sum + b;
            }
            h = a + b;
            a = b;
            b = h;
        }
        printf("%d", sum);
    }
}

void getInt(int* z)
{
    scanf_s("%d", z);
}
