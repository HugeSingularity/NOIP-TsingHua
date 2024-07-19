#include <cstdio>

int a[1000000];

int find(int l, int r, int x)
{
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] < x)
            l = mid + 1;
        else
        {
            r = mid;
        }
    }
    return l;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= a[n - 1])
        {
            printf("%d\n", -1);
            continue;
        }
        printf("%d\n", find(0, n, x));
    }
    return 0;
}