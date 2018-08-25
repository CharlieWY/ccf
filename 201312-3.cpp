#include<iostream>
using namespace std;

int h[10000];
int n;

void a(int i,int max,int v)
{
	while(i<n-1)
	{
		if(h[i]<=h[i+1])
		{
			v=h[i]*2;
			max=v;
			a(i+1,max,v);
		}
		else
		{
			if(h[i+1]*2>=v)
			{
				v=h[i+1]*2;
				max=v;
				a(i+1,max,v);
			}
			else
			{
				max=v;
				v=h[i+1];
				a(i+1,max,v);
			}
		}
	}
	return;
}

int main()
{
	int max;
	int v;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>h[i];
	max=h[0];
	v=h[0];
	a(0,max,v);
	cout<<max<<endl;
	return 0;	
} 
