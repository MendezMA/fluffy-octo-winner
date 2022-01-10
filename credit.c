#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long i = get_long("Number: ");
    long z = i;
    long y = i;
    int o = i % 10;
    int n = i % 10;
    int m = 0;
    int l = 0;
    while (z / 10 > 0)
    {
        z = z / 10;
        for (int j = 0; i / 10 > 0; j++)
        {
            i = i / 10;
            int k = i % 10;
            if (j % 2 == 0)
            {
                l = k * 2;
                if (l > 9)
                {
                    l = (l / 10) + (l % 10);
                }
                m = m + l;
            }
            else
            {
                o = k;
                n = n + k;
            }
        }
    }
    int p = m + n;
    if (p % 10 == 0)
    {
        int a;
        long b = y;
        int x;
        for (a = 1; y / 10 > 0; a++)
        {
            y = y / 10;
        }
        do
        {
            b = b / 10;
            x = b % 100;
        }
        while (b > 100);
        if (a < 17 && a > 12)
        {
            if (a == 15)
            {
                if (x == 34 || x == 37)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else if (a == 13 || a == 16)
            {
                if (a == 16 && x >= 51 && x <= 55)
                {
                    printf("MASTERCARD\n");
                }
                else if (x / 10 == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
