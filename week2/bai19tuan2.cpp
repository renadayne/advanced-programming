#include<iostream>
using namespace std;


int main()
{
	int n;
	cout << "Tong so mon hoc can tinh DTB: ";
	cin >> n;
	double d[n],hs[n],mean,sumh=0,sum=0;
	for(int i=1;i<=n;i++)
	{
		cout << "Diem so mon hoc " << i << ": ";
		cin >> d[i];
		cout << "He so mon hoc " << i << ": ";
		cin >> hs[i];
		sumh=sumh+hs[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum=sum+d[i]*hs[i];
	}
	mean=sum/sumh;
	cout << "So mon hoc: " << n << endl;
	cout << "Tong so he so: " << sumh << endl;
	cout << "Diem trung binh cua " << n << " mon hoc: " << mean;
	return 0;
}