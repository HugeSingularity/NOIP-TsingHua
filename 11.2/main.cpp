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
    for (int i = 1; i < n; i++)
    {
        int p = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[p] < a[j])
            {
                int tmp = a[p];
                a[p] = a[j];
                a[j] = tmp;
                p = j;
            }
            else break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}