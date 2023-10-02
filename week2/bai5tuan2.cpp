#include <iostream>
using namespace std;

main()
{
    int a,b,ucln;
    cout << "Nhap vao 2 so a va b: ";
    cin >> a >> b;
    while(a*b!=0)
    {
	if(a>=b)
    a=a%b;
    else
    b=b%a;}
    ucln=a+b;
    cout << "Uoc chung lon nhat cua a va b la: ";
    cout << ucln;
}