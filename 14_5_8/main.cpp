#include <cstdio>

int N;
double D1, C, D2, P;

int main()
{
    scanf("%u%u%u%u%d", &D1, &C, &D2, &P, &N);
    double distance[N], price[N];
    scanf("%u%u", distance, price);
    int min = 0;
    for (int i = 1; i < N; i++)
    {
        int tmp;
        scanf("%u%u", &tmp, price + i);
        tmp -= distance[i - 1];
        distance[i] = tmp;
        if (distance[i] > C * D2)
        {
            printf("No Solution");
            return 0;
        }
        if (price[i] < price[min]) min = i;
    }

    return 0;
}