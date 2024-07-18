#include <cstdio>

int a[1000000];

int find(int l, int r, int x)
{
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        if (a[mid] < x)
            l = mid;
        else
        {
            r = mid - 1;
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
        if (x <= a[0])
        {
            printf("%d", -1);
            continue;
        }
        printf("%d\n", find(0, n, x));
    }
    return 0;
}