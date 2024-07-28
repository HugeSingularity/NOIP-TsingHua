#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct student
{
    int number, Chinese, Math, English, all;
    friend bool operator <(student a, student b)
    {
        if (a.all > b.all) return 1;
        if (a.all == b.all && a.Chinese > b.Chinese) return 1;
        if (a.all == b.all && a.Chinese == b.Chinese && a.number < b.number) return 1;
        return 0;
    }
} a[1000];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a[i].number = i + 1;
        scanf("%d%d%d", &a[i].Chinese, &a[i].Math, &a[i].English);
        a[i].all = a[i].Chinese + a[i].Math + a[i].English;
    }
    sort(a, a + n);
    for (int i = 0; i < 5; i++)
    {
        printf("%d %d\n", a[i].number, a[i].all);
    }
    return 0;
}