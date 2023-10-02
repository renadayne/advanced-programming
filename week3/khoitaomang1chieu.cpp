#include<iostream>
using namespace std;

int a[10];
int b[5]={1,2,3,4};
//int c[3]={1,2,3,4};
int c[]={1,2,3,4};
int main()
{
	int a[10];
	int b[5]={1,2,3,4};
	//int c[3]={1,2,3,4};
	cout << "phan a" << "\n";
	for(int i=0;i<10;i++)
	cout << a[i] << "\n";
	cout << "phan b" << "\n";
	for(int i=0;i<5;i++)
	cout << b[i] << "\n";
	cout << "phan c" << "\n";
	int c[]={1,2,3,4};
	for(int i=0;i<10;i++)
	cout << c[i] << "\n";
	return 0;
}