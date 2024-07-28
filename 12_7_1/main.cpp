#include <cstdio>

int a[1000000];

int find(int l, int r, int x)
{
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > x)
            r = mid;
        else
        {
            l = mid + 1;
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
    int ans[m];
    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= a[n - 1])
        {
            ans[i] = -1;
            continue;
        }
        ans[i] = find(0, n, x);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", ans[i]);
    }
    return 0;
}