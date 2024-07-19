#include <cstdio>

int L, n, m, stone[50000];

bool check(int x)
{
    int num = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (stone[i] - pos < x) num++;
        else pos = stone[i];
    }
    if (L - pos < x) num++;
    return num <= m;
}

int main()
{
    scanf("%d%d%d", &L, &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", stone + i);
    }
    int l = 0, r = L;
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        if (check(mid))
            l = mid;
        else r = mid - 1;
    }
    printf("%d", l);
    return 0;
}