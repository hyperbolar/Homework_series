// Problem A
#include <stdio.h>
 
int main(void)
{
    int yy, mm, dd;
    scanf("%d %d %d", &yy, &mm, &dd);
 
    if ((yy % 100 != 0 && yy % 4 == 0) || yy % 400 == 0)
    {
        switch (mm){
        case 1: printf("%d", dd); break;
        case 2: printf("%d", dd + 31); break;
        case 3: printf("%d", dd + 31 + 29); break;
        case 4: printf("%d", dd + 31 + 29 + 31); break;
        case 5: printf("%d", dd + 31 + 29 + 31 + 30); break;
        case 6: printf("%d", dd + 31 + 29 + 31 + 30 + 31); break;
        case 7: printf("%d", dd + 31 + 29 + 31 + 30 + 31 + 30); break;
        case 8: printf("%d", dd + 31 + 29 + 31 + 30 + 31 + 30 + 31); break;
        case 9: printf("%d", dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31); break;
        case 10: printf("%d", dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30); break;
        case 11: printf("%d", dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31); break;
        case 12: printf("%d", dd + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30); break;
        }
    }
    else {
        switch (mm){
        case 1: printf("%d", dd); break;
        case 2: printf("%d", dd + 31); break;
        case 3: printf("%d", dd + 31 + 28); break;
        case 4: printf("%d", dd + 31 + 28 + 31); break;
        case 5: printf("%d", dd + 31 + 28 + 31 + 30); break;
        case 6: printf("%d", dd + 31 + 28 + 31 + 30 + 31); break;
        case 7: printf("%d", dd + 31 + 28 + 31 + 30 + 31 + 30); break;
        case 8: printf("%d", dd + 31 + 28 + 31 + 30 + 31 + 30 + 31); break;
        case 9: printf("%d", dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31); break;
        case 10: printf("%d", dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30); break;
        case 11: printf("%d", dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31); break;
        case 12: printf("%d", dd + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30); break;
        }
    }
 
    return 0;
}

// Problem B
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    int a, b, c, d, n;
    scanf("%d", &n);
 
    int e = 0;
 
    for (a = 0; a <= pow(n, 0.5); a++)
    {
        for (b = 0; b <= a; b++)
        {
            for (c = 0; c <= b; c++)
            {
                for (d = 0; d <= c; d++)
                {
                    if (a*a + b*b + c*c + d*d == n){
                        e++;
                    }
                }
            }
        }
    }
 
    printf("%d", e);
 
    return 0;
}
