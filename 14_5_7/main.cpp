#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int m, n, k, l, d, a[1005], b[1005];

int maxA()
{
    int max = 1;
    for (int i = 2; i < 1000; i++)
    {
        if (a[max] < a[i]) max = i;
    }
    return max;
}

int maxB()
{
    int max = 1;
    for (int i = 2; i < 1000; i++)
    {
        if (b[max] < b[i]) max = i;
    }
    return max;
}

int main()
{
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    scanf("%d%d%d%d%d", &m, &n, &k, &l, &d);
    int ansA[k], ansB[l];
    for (int i = 0; i < d; i++)
    {
        int x, y, p, q;
        scanf("%d%d%d%d", &x, &y, &p, &q);
        if (x == p)
        {
            if (y < q) b[y]++;
            else b[q]++;
        }
        else
        {
            if (x < p) a[x]++;
            else a[p]++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        int max = maxA();
        a[max] = 0;
        ansA[i] = max;
    }
    for (int i = 0; i < l; i++)
    {
        int max = maxB();
        b[max] = 0;
        ansB[i] = max;
    }
    sort(ansA, ansA + k);
    sort(ansB, ansB + l);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", ansA[i]);
    }
    printf("\n");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", ansB[i]);
    }

    return 0;
}