// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#define MAX 1000
char a[MAX + 5][MAX + 5];
int b[MAX + 5][MAX + 5];
int r, c;
void Tra(int n1, int n2)
{
	while (a[n1][n2]!='#'&&(n1 >= 0 || n2 >= 0 || n1 <= (r - 1) || n2 <= (c - 1)))
	{

		if (n1 - 1 >= 0)
		{
			if (a[n1 - 1][n2] == '#')
			{

			}
			else
			{
				b[n1 - 1][n2] = 1;    //可访问
				if (a[n1 - 1][n2] == '+')
				{
					n1--;
					Tra(n1 , n2);
				}
				else if (a[n1 - 1][n2] == '-')
				{
					n1--;
				}
			}
		}
		else if (n2 - 1 >= 0)
		{

		}
		else if (n1 + 1 <= (r - 1))
		{

		}
		else if (n2 + 1 <= (c - 1))
		{

		}
		else
			break;
	}
}
int main()
{
	int s1, s2, t1, t2;
	cin >> r >> c;
	for(int i=0;i<r;i++)
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
			b[i][j] = 0;
		}
	for(int i=0;i<r;i++)
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == 'S')
			{
				s1 = i;
				s2 = j;
			}
			else if (b[i][j] == 'T')
			{
				t1 = i;
				t2 = j;
			}
		}
	int n1 = s1;
	int n2 = s2;
	Tra(n1, n2);
	system("pause");
    return 0;
}

