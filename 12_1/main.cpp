#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m) printf("%d", i);
    }
    return 0;
}