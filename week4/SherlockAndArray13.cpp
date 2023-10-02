#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int t=0;t<T;t++)
	{
		int n,sum=0,temp=0;
		cin >> n;
		int a[n+1];
		a[0]=0; // coi phan tu dau tien bang 0
		for(int i=1;i<=n;i++)
		{
		cin >> a[i];
		a[i]=a[i]+a[i-1]; // tinh tong cac phan tu tu a[0] den a[i]
		}
		if(a[n]==0) // neu phan tu cuoi cung =0 thi cho dung luon
		{
			cout << "YES" << "\n";
			temp=1;
		}
		else 
		{
			for(int i=1;i<=n;i++)
			if(a[i-1]==a[n]-a[i]) // neu phan ben trai bang ben phai sur
			{
				cout << "YES" << "\n";
				temp=1;
				break;
			}
		}
		if(temp==0) cout << "NO" << "\n";
	}
	return 0;
}