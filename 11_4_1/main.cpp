#include <cstdio>

int n, m, k[5000], s[5000];

void selectionSort(int a[], int b[], int l, int r)
{
    int min = l;
    for (int i = l + 1; i <= r; i++)
    {
        if (a[min] > a[i])
            min = i;
        else if (a[min] == a[i] && b[min] < b[i]) min = i;
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
        scanf("%d%d", k + cnt++, s + cnt);
    }
    cnt--;
    selectionSort(s, k, 0, cnt);
    int l = 0;
    for (int i = 0; i <= cnt; i++)
    {
        if (s[i] < s[cnt - m + 1]) l++;
    }
    printf("%d %d\n", s[cnt - m + 1], cnt - l + 1);
    for (int i = cnt; i >= l; i--)
    {
        printf("%d %d\n", k[i], s[i]);
    }
    return 0;
}