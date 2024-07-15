#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    int cnt;
    int i = 1;
    while (cnt != 0)
    {
        cnt = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                cnt++;
            }
        }
        i++;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}