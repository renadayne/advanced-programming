#include<iostream>
#include<iomanip>
//unsigned long long a[20][20]; // khai bao bien toan cuc
using namespace std;
int main()
{
	unsigned long long a[20][20]={1}; // khai bao va gan gia tri tranh loi
	int n,i,j;
	cout << "Nhap so hang N cua tam giac pascal: ";
	cin >> n;
	cout << "Tam giac pascal bac N: " << "\n";
	for (j=0;j<n;j++)
	a[j][0]=1; // cot dau tien luon = 1
	for (i=0;i<n;i++)
	{
	for(j=1;j<=i;j++)
	a[i][j]=a[i-1][j]+a[i-1][j-1]; // cong theo quy tac tam giac pascal
	}
	for (i=0;i<n;i++)
	{
	for(j=0;j<=i;j++) 
	cout << a[i][j] << setw(5); // can le 5 khoang trong
	cout << "\n"; 
	}
	return 0;
}