#include <cstdio>
#include <algorithm>
using namespace std;

int n, k, wood[100000];

bool check(int x)
{
    int t = 0;
    for (int i = 0; i <= n; i++)
        t += wood[i] / x;
    return t >= k;
}

int main()
{
    scanf("%d%d", &n, &k);
    int l = 1, r = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", wood + i);
        if (wood[i] > r) r = wood[i];
    }
    sort(wood, wood + n);
    while (l < r)
    {
        int mid = (l + r + 1) / 2;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d", l);
    return 0;
}