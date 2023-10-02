#include <iostream>
using namespace std;
string fibo(int n)
{
	if (n == 0) return "a";
	else if (n == 1) return "b";
	else return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	for (int i = 0;i <= 10;i++) cout << fibo(i) << endl;
	return 0;
}