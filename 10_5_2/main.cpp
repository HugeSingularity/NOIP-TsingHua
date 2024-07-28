#include <iostream>
#include <stack>
using namespace std;

char ch;
int tmp, ans, x;

int main()
{
    cin >> tmp;
    stack<int> s;
    s.push(tmp);
    while (cin >> ch)
    {
        cin >> tmp;
        tmp = tmp % 10000;
        if (ch == '+') s.push(tmp);
        else
        {
            x = s.top();
            s.pop();
            x = x * tmp % 10000;
            s.push(x);
        }
    }
    while (!s.empty())
    {
        ans = (ans + s.top()) % 10000;
        s.pop();
    }
    cout << ans % 10000 << endl;
    return 0;
}