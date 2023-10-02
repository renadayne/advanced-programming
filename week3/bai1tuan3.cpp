#include<iostream>
using namespace std;

int main()
{
	int i;
	double n,a[100],sum=0;
	cout << "Nhap vao 1 so nguyen duong N bat ki: ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cout << "Nhap vao ban phim so thu " << i << ": ";
		cin >> a[i];
		sum=sum+a[i];
	}
	double mean=sum/n,ps=0;
	for(i=1;i<=n;i++)
	ps=ps+(a[i]-mean)*(a[i]-mean)/(n-1);
	cout << "gia tri trung binh cua day so la " << mean << endl;
	cout << "gia tri phuong sai cua day so la " << ps;
	return 0;
	
}