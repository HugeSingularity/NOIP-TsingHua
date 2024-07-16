#include <cstdio>

int n, m, k[5000], s[5000];

void selectionSort(int a[], int b[], int l, int r)
{
    int min = l;
    for (int i = l + 1; i <= r; i++)
    {
        if (a[min] > a[i])
            min = i;
    }
    if (min != l)
    {
        int tmp = a[l];
        a[l] = a[min];
        a[min] = tmp;
        int tmpb = b[l];
        b[l] = b[min];
        b[min] = tmpb;
    }
    if (l >= r) return;
    else selectionSort(a, b, l + 1, r);
}

int main()
{
    scanf("%d%d", &n, &m);
    m = m * 15 / 10;
    int cnt = 0;
    while (n--)
    {
        scanf("%d%d", k + cnt, s + cnt);
        if (s[cnt] >= m) cnt++;
    }
    selectionSort(s, k, 0, cnt);
    for (int i = 1; i < cnt; i++)
    {
        if (s[i - 1] == s[i] && k[i - 1] < k[i])
        {   
            int tmpK = k[i];
            k[i] = k[i - 1];
            k[i - 1] = tmpK;
            int tmpS = s[i];
            s[i] = s[i - 1];
            s[i - 1] = tmpS;
        }
    }
    printf("%d %d\n", m, cnt + 1);
    for (int i = cnt; i >= 0; i++)
    {
        printf("%d %d\n", k[i], s[i]);
    }
    return 0;
}