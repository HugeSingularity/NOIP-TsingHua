#include <cstdio>

bool check(int x)
{

}

int Search(int a[], int l, int r, int x)
{
	while (l < r)
	{
		int mid = l + r >> 1;
		if (check(x))
		{
			r = mid;
		}
		else
		{
			l = mid + 1;
		}
		return l;
	}
}

int main()
{
    return 0;
}