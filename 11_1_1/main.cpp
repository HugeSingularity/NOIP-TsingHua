#include <cstdio>
int n;
int train[10000];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", train + i);
    }
    int ans = 0;
    int cnt = 1;
    int i = 1;
    while (cnt != 0)
    {
         cnt = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (train[j] > train[j + 1])
            {
                int tmp = train[j];
                train[j] = train[j + 1];
                train[j + 1] = tmp;
                cnt++;
            }
        }
        i++;
        ans += cnt;
    }
    printf("%d", ans);
    return 0;
}