#include <iostream>
using namespace std;

main()
{
    long long a,b,ucln,bcnn;
    cout << "Nhap vao ban phim 2 so a va b: ";
    cin >> a >> b;
    bcnn=a*b;
    while (a != b)
	{
if (a>b)
a=a-b;
else 
b=b-a;
}
ucln=a;
    cout << "boi chung nho nhat cua a va b la: ";
    cout << bcnn/ucln;
}