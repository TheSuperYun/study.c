#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is(int number);
void count_sum(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

/* 你的代码将被嵌在这里 */
int is(int num)
{
    int sum = 0;
    int temp = 0;
    while (1)
    {
        if (num == 0)
        {
            break;
        }
        temp = num % 10;
        sum += temp;
        num /= 10;
    }
    if (sum == 5)
        return 1;
    else
        return 0;
}
void count_sum(int a, int b)
{
    int n = 0, i = 0, sum = 0;
    while (a<=b)
    {
        if (is(a))
        {
            sum += a;
            i++;
        }
        a++;
    }
    printf("count = %d, sum = %d", i, sum);
}