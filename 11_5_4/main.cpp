#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    scanf("%d", number + i);
    sort(number, number + n);
    for (int i = 1, j = n - 1, k = 0; i <= n; i++)
    {
        if (i % 2 == 1) printf("%d\n", number[j--]);
        else printf("%d\n", number[k++]);
    }
    return 0;
}