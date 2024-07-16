#include <cstdio>

void selectionSort(int a[], int l, int r)
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
    }
    if (l >= r) return;
    else selectionSort(a, l + 1, r);
}

int main()
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    selectionSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}