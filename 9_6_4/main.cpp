#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

int alphabet[1005];

int main()
{
    memset(alphabet, 0, sizeof(alphabet));
    int m, n;
    scanf("%d%d", &m, &n);
    queue<int> letter;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if (!alphabet[tmp])
        {
            if (++cnt > m)
            {
                int a = letter.front();
                alphabet[a] = 0;
                letter.pop();
            }
            letter.push(tmp);
            alphabet[tmp] = 1;
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}