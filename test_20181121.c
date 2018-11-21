//1
#include <stdio.h>
#include <math.h>
 
int digit(int n)
{
    int c = 0;
    while (n){
        c++;
        n /= 10;
    }
    return c;
}
 
int apc(int n)
{
    int d = digit(n);
    int sqr = n * n;
    int sqr_d = sqr % (int)pow(10, d);
    if (sqr_d == n)
        return 1;
    else
        return 0;
}
 
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d ", 1);
    for (int i = 2; i < n; i++)
    {
        if (apc(i))
            printf(" %d", i);
    }
 
    return 0;
}

//2
#include <stdio.h>
#include <math.h>
 
int wrap(int n, int w)
{
    int new = n / w;
    int keep = n % w;
    if (n < w)
        return new;
    else
        return new + wrap(new + keep, w);
}
 
int main(void)
{
    int m, p, w;
    scanf("%d %d %d", &m, &p, &w);
    printf("%d", m / p + wrap(m/ p, w));
 
    return 0;
}
