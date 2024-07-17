#include <cstdio>
#include <algorithm>
using namespace std;

int find(int a[], int l, int r, int m)
{
    int middle = (r - l) / 2;
    if (a[middle] < m) find(a, middle + 1, r, m);
    else if (a[middle] > m) find(a, l, middle - 1, m);
    else return middle;
}

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
    find(a, 0, n - 1, m);
    return 0;
}