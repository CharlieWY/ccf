#include<iostream>
using namespace std;
#define MAX 1000
#define N 10000
int b[10000] = { 0 };
int main()
{
	int n;
	int a[MAX];
	int c[MAX];
	int m = 0;
	int time = 0;
	int num = 1;
	cin >> n;
	cin >> a[0];
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
			max = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		b[a[i]]++;
	}
	for (int i = 1; i <= max; i++)
	{
		if (b[i] > time)
		{
			time = b[i];
		}
	}
	for (int i = 1; i <= max; i++)
	{
		if (b[i] == time)
		{
			c[m++] = i;
		}
	}
	int min = 10000;
	for (int i = 0; i < m; i++)
	{
		if (c[i] < min)
		{
			min = c[i];
		}
	}
	cout << min << endl;
    return 0;
}


