#include<iostream>
#include<string>
using namespace std;


long long factorial(int n)
{
	if(n==1) return 1;
	cout << "n = " << n << " at " << &n << endl;
	return n*factorial(n-1);
}

int main()
{
	int n;
	cin >> n;
	cout << "n giai thua co gia tri la " << factorial(n);
	return 0;
	// nhan xet: cac gia tri duoc in vao cac o nho ma chi khac nhau 2 so cuoi => o nho gan nhau
}