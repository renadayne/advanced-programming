#include<iostream>
#include<math.h>
using namespace std;

bool kt(int n)
{
	int cnt=0;
	for(int i=2;i<=n/2;i++)
	if(n%i==0) cnt++;
	if(cnt==0) return 1;
	else return 0;
}

int main()
{
	int n;
	cin >> n;
	for(int j=2;j<n;j++)
	{
		if(kt(j)) cout << j << " ";
	}
	return 0;
}

