#include<iostream>
using namespace std;
bool check(int n)
{
	int temp=n,sum=0,d;
	while(temp>0)
	{
		d=temp%10;
		sum=sum*10+d;
		temp=temp/10;
	}
	if(sum==n) return 1;
	else return 0;
}
int main()
{
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
	int a,b,c=0;
	cin >> a >> b;
	for(int i=a;i<=b;i++)
	{
		if(check(i)) c++;
	}
	cout << c << endl;
	}
	return 0;
}