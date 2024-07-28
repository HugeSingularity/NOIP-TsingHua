#include <cstdio>
#include <algorithm>
using namespace std;

int n, w, price[30000];

int main()
{
    scanf("%d%d", &w, &n);
    for (int i = 0; i < n; i++)
        scanf("%d", price + i);
    sort(price, price + n);
    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        if (price[l] + price[r] > w) r--, ans++;
        else l++, r--, ans++;
    }
    printf("%d", ans);
    return 0;
}