#include <cstdio>
#include <iostream>
using namespace std;

struct student
{
    string name;
    string gender;
    int age = 0;
    int mark = 0;
};

int main()
{
    int n;
    scanf("%d", &n);
    student all[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d", &all[i].name, &all[i].gender, &all[i].age, &all[i].mark);
    }
    int cnt;
    int i = 1;
    while (cnt != 0)
    {
        cnt = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (all[j].mark > all[j + 1].mark)
            {
                int tmp = all[j].mark;
                all[j].mark = all[j + 1].mark;
                all[j + 1].mark = tmp;
                cnt++;
            }
        }
        i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%s %s %d %d\n", all[i].name, all[i].gender, all[i].age, all[i].mark);
    }
    return 0;
}