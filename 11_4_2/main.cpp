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
    int ans[n];
    ans[0] = number[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (number[i] != number[i - 1])
        {
            ans[cnt++] = number[i];
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}