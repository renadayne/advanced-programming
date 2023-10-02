#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int r=rand()%n;
	cout << r;
	return 0;
}