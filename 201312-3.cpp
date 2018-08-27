#include<iostream>

using namespace std;
const int N = 1003;
int a[N];

int main()
{
	//freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int low=a[i];
        for(int j=i;j<n;j++)
        {
			if(a[j]<low)
                low=a[j];
            int tmp=(j-i+1)*low;
            if(tmp>ans)
                ans=tmp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
