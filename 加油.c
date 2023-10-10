#include<stdio.h>
int main()
{
    int a = 0, b = 0;
    float s = 0;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (b == 90)
    {
        if (c == 'm')
        {
            s = 6.95 * a * 0.95;
        }
        else
        {
            s = 6.95 * a * 0.97;
        }
    }
    else if (b == 93)
    {
        if (c == 'm')
        {
            s = 7.44 * a * 0.95;
        }
        else
        {
            s = 7.44 * a * 0.97;
        }
    }
    else if (b == 97)
    {
        if (c == 'm')
        {
            s = 7.93 * a * 0.95;
        }
        else
        {
            s = 7.93 * a * 0.97;
        }
    }
    printf("%.2f", s);
}