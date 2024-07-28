#include <cstdio>
#include <queue>
using namespace std;

int n, t, m, x, ans, tmpNation[100005];
struct node
{
    int t, s;
}h;
queue<node> ship;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &t, &m);
        while (!ship.empty())
        {
            h = ship.front();
            if (h.t + 86400 <= t)
            {
                tmpNation[h.s]--;
                if (tmpNation[h.s] == 0) ans--;
                ship.pop();
                continue;
            }
            break;
        }
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &x);
            h.s = x, h.t = t;
            ship.push(h);
            tmpNation[x]++;
            if (tmpNation[x] == 1) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}