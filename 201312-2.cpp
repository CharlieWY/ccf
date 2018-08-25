#include<iostream>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	string s;
	cin>>s;
	int num;
	int b[9];
	b[0]=s[0];
	b[1]=s[2];
	b[2]=s[3];
	b[3]=s[4];
	b[4]=s[6];
	b[5]=s[7];
	b[6]=s[8];
	b[7]=s[9];
	b[8]=s[10];
	for(int i=0;i<9;i++)
	{
        num+=((b[i]-48)*(i+1));  //注意数字字符运算时是以ASCII码的数值参与运算的，所以要注意转换 
	}
	int rest=num%11;

	if(s[12]=='X')
	{
		if(rest==10)
			cout<<"Right"<<endl;
		else
		{
			s[12]=(rest+48);
			cout<<s<<endl;
		}
	}
	else
	{
		if(rest!=10)
		{
			if(rest==(s[12]-48))
				cout<<"Right"<<endl;
			else
			{
				s[12]=rest+48;
				cout<<s<<endl;
			}
		}
		else
		{
			s[12]='X';
			cout<<s<<endl;
		}
	}
	return 0;
}
