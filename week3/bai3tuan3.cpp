#include<iostream>
using namespace std;

int main()
{
	int n,i,a[100];
	cout << "Nhap vao ban phim 1 so nguyen duong bat ki nha: ";
	cin >> n;
	for(i=1;i<=n;)
	{
		cout << "Nhap vao so thu " << i << " (0-9): ";
		cin >> a[i];
		if(a[i]>=0 && a[i]<=9)
		i++;
		else continue;
	}
	int cnt[100];
	for(i=0;i<=9;i++)
	cnt[i]=0;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(a[i]==j) cnt[j]++;
		}
	}
	for(i=0;i<=9;i++)
	{
		cout << "so luong so " << i << " la: " << cnt[i] << endl; 
	}
	return 0;
}