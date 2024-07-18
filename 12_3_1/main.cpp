#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int a[1000000];

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    memset(a, -1, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        int j;
        scanf("%d", &j);
        a[j] = i;
    }
    int ans[m];
    for (int i = 0; i < m; i++)
    {
        int j;
        scanf("%d", &j);
        ans[i] = a[j];
    }
    for (int i = 0; i < m; i++)
        printf("%d\n", ans[i]);
    return 0;
}