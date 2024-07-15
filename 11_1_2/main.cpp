#include <cstdio>

int n;
int mark[1000];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", mark + i);
    int cnt = 1;
    int i = 1;
    while (cnt != 0)
    {
        cnt = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (mark[j] > mark[j + 1])
            {
                int tmp = mark[j];
                mark[j] = mark[j + 1];
                mark[j + 1] = tmp;
                cnt++;
            }
        }
        i++;
    }
    for (int j = 0; j < n; j++)
        printf("%d ", mark[j]);
    return 0;
}