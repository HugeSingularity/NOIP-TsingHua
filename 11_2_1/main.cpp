#include <cstdio>

int n, m;
int mark[1000];

int main()
{
    scanf("%d%d", &n, &m);
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", mark + i);
        if (mark[i] > m)
            ans++;
    }
    printf("%d", ans);
    return 0;
}