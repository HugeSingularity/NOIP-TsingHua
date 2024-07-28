#include <cstdio>

int n;
double d1, c, d2, d[8], p[8];

int main()
{
    scanf("%lf%lf%lf%lf%d", &d1, &c, &d2, p, &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf%lf", d + i, p + i);
    }
    d[n + 1] = d1;
    double ans = 0, can = 0;
    for (int i = 0; i <= n; i++)
    {
        if (c * d2 < d[i + 1] - d[i])
        {
            printf("No Solution");
            return 0;
        }
        for (int j = i + 1; j <= n + 1; j++)
        {
            if (c * d2 < d[j] - d[i])
            {
                ans += (c - can) * p[i];
                can = c - (d[j - 1] - d[i]) / d2;
                i = j - 2;
                break;
            }
            if (p[j] < p[i])
            {
                ans += ((d[j] - d[i]) / d2 - can) * p[i];
                can = 0;
                i = j - 1;
                break;
            }
        }
    }
    printf("%.2f", ans);
    return 0;
}